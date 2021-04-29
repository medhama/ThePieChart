#include "gestions.h"
#include "ui_gestions.h"
#include "fournisseur.h"
#include "stock.h"
#include "smtp.h"
#include <QDebug>
#include <QApplication>
#include <QMessageBox>
#include <QIntValidator>
#include <QtMultimedia/QMediaPlayer>
#include <arduino.h>
// include for map
#include <QGuiApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlListProperty>
#include "gestions.h"
#include <QApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QEvent>
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QQmlEngine>
#include <QQuickItem>

//include lang
#include <QFontDialog>


gestions::gestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestions)
{
    //add sound effect

    player = new QMediaPlayer(this);



//end sound effect


    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 99999, this));
    ui->tab_fournisseur_2->setModel(F.afficher());
    ui->le_idstock->setValidator(new QIntValidator(0, 99999, this));
    ui->tab_stock_2->setModel(S.afficher());
    makePolt();
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail_Produit_Date()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));

    int ret = A.connect_arduino();
        switch (ret)
        {
            case(0): qDebug()<<"arduino is avaible and connected to: "<<A.getArduino_port_name();
            break;

            case(1): qDebug()<<"arduino is avaible but not connected to: "<<A.getArduino_port_name();
            break;

            case(-1): qDebug()<<"arduino is not avaible";
            break;


        }

        QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));


        //Map
        connect(ui->boutonAller, SIGNAL(clicked(bool)), this, SLOT(aller()));

        QQuickItem *item = ui->quickWidget->rootObject();
        QObject *objectMouseArea = item->findChild<QObject *>("mouseArea");
        if(objectMouseArea != nullptr)
        {
            connect(objectMouseArea, SIGNAL(afficherPosition(QString,QString)), this, SLOT(afficherPosition(QString,QString)));
        }
        QObject *objectGeocodage = item->findChild<QObject *>("geocodage");
        if(objectGeocodage != nullptr)
        {
            connect(objectGeocodage, SIGNAL(afficherInformations(QString,QString)), this, SLOT(afficherInformations(QString,QString)));
        }

        setWindowTitle("Map v2");
        showMaximized();
        //Endmap


}






gestions::~gestions()
{
    delete ui;
}


void gestions::on_pb_ajouterf_clicked()
{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect


    int  id=ui->le_id->text().toInt();
    QString nomsoc=ui->le_nomsoc->text();
    QString lieu=ui->le_lieu->text();
    QString numero=ui->le_numero->text();
    QString typeeq=ui->le_typeeq->currentText();


    FOURNISSEUR F(id,nomsoc,lieu,numero,typeeq);

    bool test=F.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de fournisseur succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_fournisseur_2->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void gestions::on_pb_supprimerf_clicked()
{
   FOURNISSEUR F1;
    F1.setid(ui->le_id->text().toInt());
    bool test=F1.supprimer(F1.getid());
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("supprimer succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_fournisseur_2->setModel(F.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("supprimer failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}



void gestions::on_pb_ajouters_clicked()
{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect


    int  id=ui->le_idstock->text().toInt();
    QString libelle=ui->le_libstock->text();
    int quantite=ui->le_qtestock->text().toInt();

    int yp,mp,dp;

    ui->le_datestock->date().getDate(&yp,&mp,&dp);


    int prix=ui->le_prixstock->text().toInt();
    QString datestock =S.SET_Date(&yp,&mp,&dp);

    STOCK S(id,libelle,quantite,datestock,prix);

    bool test=S.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de stock succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_stock_2->setModel(S.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajoutstock failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void gestions::on_pb_supprimers_clicked()
{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect

   STOCK S1;
     S1.setid(ui->le_idstock->text().toInt());
     bool test=S1.supprimer(S1.getid());
     if(test){
         QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("supprimerstock succesful.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_stock_2->setModel(S.afficher());
     }
     else{

         QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("supprimerstock failed.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
     }

}
/*
void gestions::on_tableView_produit_activated(const QModelIndex &index)
{
    QString val=ui->tableView_produit->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select *from produit where nom LIKE '"+val+"'");

    if (query.exec())
    {
        while(query.next())
        {
            ui->lineEdit_nom->setText(query.value(0).toString());
            ui->lineEdit_date->setDate(query.value(1).toDate());
            ui->lineEdit_Quantite->setText(query.value(2).toString());
            ui->lineEdit_Prix->setText(query.value(3).toString());

        }
    }
    else
        QMessageBox::warning(this,"Erreur","Selectionner le nom du produit");
}
*/
void gestions::on_tab_fournisseur_2_activated(const QModelIndex &index)
{
    QString val=ui->tab_fournisseur_2->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select * from fournisseur where id LIKE '"+val+"'");


    if (query.exec())
    {
        while(query.next())
        {
            ui->le_id->setText(query.value(0).toString());
            ui->le_nomsoc->setText(query.value(1).toString());
            ui->le_lieu->setText(query.value(2).toString());
             ui->le_lieumap->setText(query.value(2).toString());
            ui->le_numero->setText(query.value(3).toString());
            ui->le_typeeq->setCurrentText(query.value(4).toString());
        }
    }
    else
        QMessageBox::warning(this,"Erreur","Selectionner le id du fournisseur");
}

void gestions::on_tab_stock_2_activated(const QModelIndex &index)
{
    QString val=ui->tab_stock_2->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select * from stock where ID LIKE '"+val+"'");


    if (query.exec())
    {
        while(query.next())
        {
            ui->le_idstock->setText(query.value(0).toString());
            ui->le_libstock->setText(query.value(1).toString());
            ui->le_qtestock->setText(query.value(2).toString());
         //   ui->le_datestock->setText(query.value(3).toString());
            ui->le_datestock->setDate(query.value(3).toDate());

            ui->le_prixstock->setText(query.value(4).toString());

        }
    }
    else
        QMessageBox::warning(this,"Erreur","Selectionner le id du stock");
}

void gestions::on_pbmodifierstock_clicked()
{
    int yp,mp,dp;
    ui->le_datestock->date().getDate(&yp,&mp,&dp);

  QString DATE =S.SET_Date(&yp,&mp,&dp);



    int verif=0;
    if(ui->le_libstock->text()=="")
    {
        QMessageBox::warning(this,"erreur","libelle stock vide");
        return ;
    }
  //  QString DATE =S.SET_Date(&yp,&mp,&dp);
    if(S.verifierPrix(ui->le_prixstock->text().toDouble())==false || S.verifierQuantite(ui->le_qtestock->text().toInt())==false)
        QMessageBox::warning(this,"erreur","Prix ou Quantite invalide");
     else
        verif=1;

     if (verif==1)
     {


    if(S.STOCKExiste(ui->le_libstock->text()))
    {
        if(S.Modifier_STOCK(ui->le_idstock->text().toInt(),ui->le_libstock->text(),ui->le_qtestock->text().toInt(),DATE,ui->le_prixstock->text().toInt()))
           { QMessageBox::information(this,"Modifiee","STOCK modifie avec succés");
        ui->tab_stock_2->setModel(S.afficher());
}
        else
        {
                //QMessageBox::warning(this,"Erreur","Erreur");
             QMessageBox::information(this,"Modifiee","STOCK modifie avec succés");
              ui->tab_stock_2->setModel(S.afficher());
        }
    }
    else
        QMessageBox::warning(this,"Erreur","STOCK n' existe pas");
   // ui->total->clear();
   // ui->label_dt->clear();
}
}






void gestions::on_pbmodifierfournisseur_2_clicked()
{
      int verif=0;
      if(ui->le_nomsoc->text()=="")
      {
          QMessageBox::warning(this,"erreur","nomsociete vide");
          return ;
      }
      //ui->le_datestock->date().getDate(&yp,&mp,&dp);
     // QString DATE =tmp0.SET_Date(&yp,&mp,&dp);
      if(F.verifier_vide(ui->le_lieu->text())==false || F.verifier_vide(ui->le_numero->text()) ==false || F.verifier_vide(ui->le_typeeq->currentText())==false)
          QMessageBox::warning(this,"erreur","lieu ou numero invalide");
       else
          verif=1;

       if (verif==1)
       {


      if(F.FOURNISSEURExiste(ui->le_nomsoc->text()))
      {
          if(F.Modifier_FOURNISSEUR(ui->le_id->text().toInt(),ui->le_nomsoc->text(),ui->le_lieu->text(),ui->le_numero->text(),ui->le_typeeq->currentText()))
          {QMessageBox::information(this,"Modifiee","fournisseur modifie avec succés");
              ui->tab_fournisseur_2->setModel(F.afficher());
}

          else
          {
                  QMessageBox::warning(this,"Erreur","Erreur");
          }
      }
      else
          QMessageBox::warning(this,"Erreur","fournisseur n' existe pas");
     // ui->total->clear();
     // ui->label_dt->clear();
  }
}

void gestions::on_lineEdit_num_4_textChanged(const QString &arg1)
{
    QString rech;
      rech= arg1.toCaseFolded();
        QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery* qry=new QSqlQuery();

     qry->prepare("SELECT * from fournisseur where nomsoc like concat (:rech,'%')   or lieu like concat (:rech,'%') or numero  like concat (:rech,'%') or typeeq like concat (:rech,'%') or id like concat (:rech,'%')   ");
     qry->bindValue(":rech",rech);
     qry->exec();
     model->setQuery(*qry);
     ui->tab_fournisseur_2->setModel(model);
}

void gestions::makePolt()
{

    qDebug()<<"test";

       QLinearGradient gradient(0, 0, 0, 400);
       gradient.setColorAt(0, QColor(50,50,50));
       gradient.setColorAt(0.38, QColor(50,50,50));
       gradient.setColorAt(1, QColor(177,177,177));
       ui->customPlot->setBackground(QBrush(gradient));


       QCPBars *regen = new QCPBars(ui->customPlot->xAxis,ui-> customPlot->yAxis);

       regen->setAntialiased(false);

       regen->setStackingGap(1);




       regen->setName("Nombre de FOURNISSEUR par rapport a la type");
       regen->setPen(QPen(QColor(240,226,58).lighter(130)));
       regen->setBrush(QColor(255,160,47));

       QVector<double> ticks;
       QVector<QString> labels;






       ticks << 1<<2<<3;

      labels <<"alimentation"<<"decoration"<<"Autre";
       QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
       textTicker->addTicks(ticks, labels);
       ui->customPlot->xAxis->setTicker(textTicker);
       ui->customPlot->xAxis->setTickLabelRotation(60);
       ui->customPlot->xAxis->setSubTicks(false);
       ui->customPlot->xAxis->setTickLength(0, 3);
       ui->customPlot->xAxis->setRange(0, 8);
       ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
       ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
       ui->customPlot->xAxis->grid()->setVisible(true);
       ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
       ui->customPlot->xAxis->setTickLabelColor(Qt::white);
       ui->customPlot->xAxis->setLabelColor(Qt::white);


       ui->customPlot->yAxis->setRange(0,10);
       ui->customPlot->yAxis->setPadding(10); // a bit more space to the left border
       ui->customPlot->yAxis->setLabel("Nombre de FOURNISSEUR");
       ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
       ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
       ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
       ui->customPlot->yAxis->grid()->setSubGridVisible(true);
       ui->customPlot->yAxis->setTickLabelColor(Qt::white);
       ui->customPlot->yAxis->setLabelColor(Qt::white);
       ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
       ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));


       QVector<double> regenData;
       int n1=0,n2=0,n3=0;

           QSqlQuery q1("select count(*) from FOURNISSEUR where typeeq='alimentation'");

           while (q1.next())
           {
               n1 = q1.value(0).toInt();
               qDebug()<<"Nombre FOURNISSEUR : "<<n1<<endl;
           }

           QSqlQuery q2("select count(*) from FOURNISSEUR where typeeq='decoration'");
           while (q2.next())
           {
               n2 = q2.value(0).toInt();
               qDebug()<<"Nombre FOURNISSEUR : "<<n2<<endl;
           }

           QSqlQuery q3("select count(*) from FOURNISSEUR where typeeq='Autre'");
           while (q3.next())
           {
                n3 = q3.value(0).toInt();
                qDebug()<<"Nombre FOURNISSEUR : "<<n3<<endl;
           }




       regenData << n1<<n2<<n3;
       regen->setData(ticks, regenData);


       ui->customPlot->legend->setVisible(true);
       ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
       ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
       ui->customPlot->legend->setBorderPen(Qt::NoPen);
       QFont legendFont = font();
       legendFont.setPointSize(10);
       ui->customPlot->legend->setFont(legendFont);
       ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);


}

void gestions::on_pushButton_date_diifrence_clicked()
{
    ui->label_day->clear();
    ui->label_moi->clear();
    ui->label_year->clear();
    ui->label_d->clear();
    ui->label_m->clear();
    ui->label_y->clear();

    int y,m,d,yp,mp,dp;
    double ydiff=0,mdiff=0,daydiff=0;
    ui->le_datestock->date().getDate(&yp,&mp,&dp);

    S.get_date(&y,&m,&d);
    ydiff = double (yp)-(y) ;
    mdiff=mp-m;
    mdiff=fabs(mdiff);
    daydiff=dp-d;
    daydiff=fabs(daydiff);
    long n1=S.nb_jours(yp,mp,dp);
    long n2=S.nb_jours(y,m,d);
    if(n1-n2 >= 0)
    {
        ui->label_day->setNum(daydiff);
        ui->label_moi->setNum(mdiff);
        ui->label_year->setNum(ydiff);
        ui->label_d->setText("jours");
        ui->label_m->setText("mois");
        ui->label_y->setText("annes");

    }
    else
        ui->label_d->setText("Date expiree");
}


void gestions::on_pushButton_total_clicked()
{
    ui->total->setNum(S.get_total());
    ui->label_dt->setText("DT");
}

void gestions::on_recherchestock_textChanged(const QString &arg1)
{
    QString rech;
      rech= arg1.toCaseFolded();
        QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery* qry=new QSqlQuery();

     qry->prepare("SELECT * from stock where libelle like concat (:rech,'%')   or quantite like concat (:rech,'%') or prix  like concat (:rech,'%') or datestock like concat (:rech,'%')    ");
     qry->bindValue(":rech",rech);
     qry->exec();
     model->setQuery(*qry);
     ui->tab_stock_2->setModel(model);
}

void gestions::on_imp_clicked()
{

}


//MAILING*********************************************************************************************************************************


void gestions::sendMail_Produit_Date()
{
    Smtp* smtp = new Smtp("virupediaproject@gmail.com", "123456789*-", "smtp.gmail.com", 465,60000);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
       // ui->msg->toPlainText()
        smtp->sendMail("virupediaproject@gmail.com", ui->rcpt->text() ,"SMART PASTRY",S.Verifier_Date() );
    else
        smtp->sendMail("virupediaproject@gmail.com", ui->rcpt->text() , "SMART PASTRY",S.Verifier_Date() );
}

void gestions::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( this, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );

}

void gestions::on_EnvoyerMail_pushButton_clicked()
{
     ui->tabWidget->setCurrentIndex(4);
}

void gestions::on_pushButton_12_clicked()
{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect
    ui->tabWidget->setCurrentIndex(3);

}

void gestions::on_AccStockpb_clicked()

{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect
     ui->tabWidget->setCurrentIndex(1);
}

void gestions::on_AccFournisseurpb_clicked()

{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();


//end sound effect
    ui->tabWidget->setCurrentIndex(2);
}



void gestions::on_Soundoffpb_clicked()
{
     player->stop();
}

void gestions::on_pushButton_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/tonyz.mp3"));
    player->play();
}

void gestions::on_slidervolume_sliderMoved(int position)
{
    player->setVolume(position);
}





void gestions::on_Pbtime_clicked()
{

    int T=ui->Timer->currentText().toInt();
    timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(Pbtime()));
    timer->start(T*1000);

}


void gestions::Pbtime()
{



    int  id=ui->le_idstock_3->text().toInt();
    QString libelle=ui->le_libstock_3->text();
    int quantite=ui->le_qtestock_3->text().toInt();

    int yp,mp,dp;

    ui->le_datestock_3->date().getDate(&yp,&mp,&dp);


    int prix=ui->le_prixstock_3->text().toInt();
    QString datestock =S.SET_Date(&yp,&mp,&dp);

    STOCK S(id,libelle,quantite,datestock,prix);

    bool test=S.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de stock succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_stock_2->setModel(S.afficher());

          //Clear attributs
          ui->le_idstock_3->clear();
          ui->le_libstock_3->clear();
          ui->le_qtestock_3->clear();
           ui->le_datestock_3->clear();
           ui->le_prixstock_3->clear();

    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajoutstock failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    timer->stop();

}
//tarek
void gestions::on_pbarduinoT_O_clicked()
{
    A.write_to_arduino("1");

}

//tarek
void gestions::on_pbarduinoT_off_clicked()
{
    A.write_to_arduino("0");

}

void gestions::update_label()
{ /*
    data = A.read_from_arduino();

    //taha+tarek
    qDebug()<<data;

    if(data == "ON" )
    {
        G.setModal(true);
        G.exec();
    } */
    //END OF taha+tarek
}



//Map
void gestions::aller()
{
    QQuickItem *item = ui->quickWidget->rootObject();
    QObject *object = item->findChild<QObject *>("indicateurPosition");
    QVariant latitude = ui->editLatitude->text(); //QVariant(43.8);
    QVariant longitude = ui->editLongitude->text(); //QVariant(4.8167);



    if(object != nullptr)
    {
        qDebug() << Q_FUNC_INFO << latitude << longitude;
        QMetaObject::invokeMethod(object, "aller", Q_ARG(QVariant, latitude), Q_ARG(QVariant, longitude));
    }
}

void gestions::afficherPosition(QString latitude, QString longitude)
{
    qDebug() << Q_FUNC_INFO << latitude << longitude;
    ui->positionLatitude_2->setText(QString::fromUtf8("%1").arg(latitude.toDouble(), 0, 'f', 5));
    ui->positionLongitude_2->setText(QString::fromUtf8("%1").arg(longitude.toDouble(), 0, 'f', 5));
    ui->editLatitude->setText(QString::fromUtf8("%1").arg(latitude.toDouble(), 0, 'f', 5));
    ui->editLongitude->setText(QString::fromUtf8("%1").arg(longitude.toDouble(), 0, 'f', 5));
}

void gestions::afficherInformations(QString adresse, QString coordonnee)
{
    qDebug() << Q_FUNC_INFO << adresse << coordonnee;
    ui->labelInformations_2->setText("Informations : " + adresse);
}



void gestions::on_chercher_clicked()
{
    QString part1="https://nominatim.openstreetmap.org/search?q=";
    QString part2=ui->le_adresspart2->text();
    QString part3="&format=json&polygon=1&addressdetails=1&fbclid=IwAR2r_qtxdov_4zZdVKfy6Xx2UXmJd5rR1XddpqCogBeZ_7nv0srbxa9OOW8";
        QUrl ava_url(part1+part2+part3);
        QNetworkRequest ava_request(ava_url);

        QNetworkAccessManager *manager = new QNetworkAccessManager();
        QEventLoop loop;

        QObject::connect(manager,
                         SIGNAL(finished(QNetworkReply*)),
                         &loop,
                         SLOT(quit()));

        QNetworkReply* reply = manager->get(ava_request);
        loop.exec();

        QString response = (QString)reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(response.toUtf8());
        QJsonObject obj = doc.object();

 // get lat et lon from the array
        QString x=doc.array()[0].toObject()["lat"].toString();
        QString y=doc.array()[0].toObject()["lon"].toString();

         qDebug() <<x;
         qDebug() <<y;

         ui->editLatitude->setText(x);
         ui->editLongitude->setText(y);
}


void gestions::on_pbgotomap_clicked()
{
    //add sound effect

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/tarek/Desktop/projetqt/Seance6/soundbuttons/sound.wav"));
    player->setVolume(50);
    player->play();

//end sound effect
    ui->tabWidget->setCurrentIndex(7);

    QString loc=ui->le_lieumap->text();
    ui->le_adresspart2->setText(loc);
}
