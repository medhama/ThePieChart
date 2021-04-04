#include "gestions.h"
#include "ui_gestions.h"
#include "fournisseur.h"
#include "stock.h"
#include "smtp.h"

#include <QApplication>
#include <QMessageBox>
#include <QIntValidator>

gestions::gestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestions)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 99999, this));
    ui->tab_fournisseur_2->setModel(F.afficher());
    ui->le_idstock->setValidator(new QIntValidator(0, 99999, this));
    ui->tab_stock_2->setModel(S.afficher());
    makePolt();

}

gestions::~gestions()
{
    delete ui;
}


void gestions::on_pb_ajouterf_clicked()
{
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
            ui->le_numero->setText(query.value(3).toString());
            ui->le_typeeq->setCurrentText(query.value(4).toString());
        }
    }
    else
        QMessageBox::warning(this,"Erreur","Selectionner le nom du produit");
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
        QMessageBox::warning(this,"Erreur","Selectionner le nom du produit");
}

void gestions::on_pbmodifierstock_clicked()
{
    int yp,mp,dp;
    int verif=0;
    if(ui->le_libstock->text()=="")
    {
        QMessageBox::warning(this,"erreur","nomstock vide");
        return ;
    }
    ui->le_datestock->date().getDate(&yp,&mp,&dp);
  //  QString DATE =S.SET_Date(&yp,&mp,&dp);
    if(S.verifierPrix(ui->le_prixstock->text().toDouble())==false || S.verifierQuantite(ui->le_qtestock->text().toInt())==false)
        QMessageBox::warning(this,"erreur","Prix ou Quantite invalide");
     else
        verif=1;

     if (verif==1)
     {


    if(S.STOCKExiste(ui->le_libstock->text()))
    {
        if(S.Modifier_STOCK(ui->le_idstock->text().toInt(),ui->le_libstock->text(),ui->le_qtestock->text().toInt(),ui->le_datestock->text(),ui->le_prixstock->text().toInt()))
           { QMessageBox::information(this,"Modifiee","Produit modifie avec succés");
        ui->tab_stock_2->setModel(S.afficher());
}
        else
        {
                QMessageBox::warning(this,"Erreur","Erreur");
        }
    }
    else
        QMessageBox::warning(this,"Erreur","Produit n' existe pas");
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
          QMessageBox::warning(this,"erreur","Prix ou Quantite invalide");
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

       QLinearGradient gradient(0, 0, 0, 400);
       gradient.setColorAt(0, QColor(90, 90, 90));
       gradient.setColorAt(0.38, QColor(105, 105, 105));
       gradient.setColorAt(1, QColor(70, 70, 70));
       ui->customPlot->setBackground(QBrush(gradient));


       QCPBars *regen = new QCPBars(ui->customPlot->xAxis,ui-> customPlot->yAxis);

       regen->setAntialiased(false);

       regen->setStackingGap(1);




       regen->setName("Nombre de FOURNISSEUR par rapport a la type");
       regen->setPen(QPen(QColor(0, 168, 140).lighter(130)));
       regen->setBrush(QColor(0, 168, 140));

       QVector<double> ticks;
       QVector<QString> labels;






       ticks << 1<<2<<3;

      labels <<"alimentation"<<"decoration"<<"c";
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

           QSqlQuery q3("select count(*) from FOURNISSEUR where typeeq='c'");
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