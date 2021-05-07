#include "gestioneventpromo.h"
#include "ui_gestioneventpromo.h"
#include <QMessageBox>
#include "evennement.h"
#include "promotion.h"
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include<QPrinter>
#include <QFileDialog>
#include <QSound>
#include <QDebug>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <QStyleFactory>
#include <QMediaPlayer>
//#include <QVideoWidget>


double FirstNum;
bool userIsTypingSecondNumber= false;

GestionEventPromo::GestionEventPromo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionEventPromo)
{
    ui->setupUi(this);

    //sound
    son=new QSound(":/img/img/adriantnt_u_click.wav");
    erreur=new QSound(":/img/img/error.wav");
    succes=new QSound(":/img/img/done.wav");

    //Menu
    ui->le_id->setValidator(new QIntValidator(100, 999, this));
    ui->le_idpro->setValidator(new QIntValidator(100, 999, this));
    ui->tab_etudiant->setModel(E.afficher());
    ui->tab_promotion->setModel(P.afficher());

    //Mail
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));

    // calculator
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_clear,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_equals,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_substract,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_add->setCheckable(true);
    ui->pushButton_substract->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);

    //Arduino
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getArduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getArduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
     QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
     //le slot update_label suite à la reception du signal readyRead (reception des données).



     //Timer
     timer_1s = new QTimer(this);
     QObject::connect(timer_1s, SIGNAL(timeout()), this, SLOT(UpdateTime()));
     timer_1s->start(1000);

     //music
     mMediaPlayer = new QMediaPlayer(this);
     connect(mMediaPlayer, &QMediaPlayer::positionChanged , [&](qint64 pos) {
            ui->avance->setValue(pos);
     });

     connect (mMediaPlayer , &QMediaPlayer::durationChanged , [&](qint64 dur) {
         ui->avance->setMaximum(dur);
     } );



}

GestionEventPromo::~GestionEventPromo()
{
    delete ui;
}

void GestionEventPromo::on_pb_ajouter_clicked()
{

    son->play();
    //ui->groupBox->setCurrentIndex(0);

  int Id_event=ui->le_id->text().toInt();
  QString Nom_event=ui->le_nom->text();
  int Date_debut=ui->le_Date_Debut->text().toInt();
  int Date_fin=ui->le_Date_Fin->text().toInt();

  Evennement E(Id_event,Nom_event,Date_debut,Date_fin);
  bool test=E.ajouter();
  QMessageBox msgBox;

  if(test)
    {  msgBox.setText("Ajout avec succes.");
      ui->tab_etudiant->setModel(E.afficher());
  }
  else
     { msgBox.setText("Echec d'ajout");}
      msgBox.exec();

}

void GestionEventPromo::on_pb_supprimer_clicked()
{
    son->play();
    Evennement E1; E1.setid(ui->le_id_supp->text().toInt());
    bool test=E1.supprimer(E1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_etudiant->setModel(E.afficher());

    }
    else
       { msgBox.setText("Echec de suppression");}
        msgBox.exec();
}

void GestionEventPromo::on_pb_ajouterpro_clicked()
{
    int id=ui->le_idpro->text().toInt();
    int Prix_initial=ui->le_prix_initial->text().toInt();
    int Prix_final=ui->le_prix_final->text().toInt();
   QString Date_Debut=ui->le_date_initiale->text();
   QString Date_Fin=ui->le_date_finale->text();
   int Pourcentage=ui->le_pourcentage->text().toInt();
    son->play();


  Promotion P(id,Prix_initial,Prix_final,Date_Debut,Date_Fin,Pourcentage);

    bool test=P.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout de stock succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_promotion->setModel(P.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajoutpromotion failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void GestionEventPromo::on_pb_supprimer_2_clicked()
{
    Promotion P1; P1.setid(ui->le_id_supp_2->text().toInt());
    bool test=P1.supprimer(P1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_promotion->setModel(P.afficher());
       }
    else
       { msgBox.setText("Echec de suppression");
        erreur->play();
    }
        msgBox.exec();
}


void GestionEventPromo::on_pb_modifier_event_clicked()
{
    QString nom = ui->le_nom_modifier->text();
    int DateD =  ui->le_Date_Debut_modifier->text().toInt();
    int DateF =  ui->le_Date_Fin_modifier->text().toInt();
    int id=ui->le_id_modifier->text().toInt();

    Evennement E2 (0,nom,DateD,DateF);

    if(E2.verif_champs_vide2(ui->le_id_modifier->text())==false)
    {
        QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'ID' ne doit pas etre vide")) ;
    }
    else
    {
        if(E2.verif_champs_vide_nom(ui->le_nom_modifier->text())==false)
        {
            QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ ' NOM ' ne doit pas etre vide")) ;
        }
        else
        {
            if(E2.verif_champs_vide2(ui->le_Date_Debut_modifier->text())==false)
            {
                QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE DEBUT' ne doit pas etre vide")) ;
            }
            else
            {
                if(E2.verif_champs_vide2(ui->le_Date_Fin_modifier->text())==false)
                {
                    QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE FIN' ne doit pas etre vide")) ;

                }
           else
        {
           if(E2.verif_chaine(ui->le_nom_modifier->text())==false)
         {
               QMessageBox::warning(this,tr("error"),tr("le champ ' NOM ' doit  etre alphabétique")) ;
         }
         else
         {

    E2.modifier(id);


    ui->tab_etudiant->setModel(E.afficher());//refresh
                     QMessageBox::information(nullptr, QObject::tr(" C fait !"),
                                       QObject::tr(" les informations concernant l'evennement sont modifiées !\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

}

           }
           }
           }
    }
}


void GestionEventPromo::on_pb_modifier_promotion_clicked()
{
    int PrixI = ui->Prix_initial_modifier->text().toInt();
    int PrixF =  ui->Prix_final_modifier->text().toInt();
    QString DateD= ui->Date_initiale_modifier->text();
    QString DateF =  ui->Date_finale_modifier_promotion->text();
    int Pourcentage = ui->pourcentage_modifier_promotion->text().toInt();
    int id=ui->id_modifier_promotion->text().toInt();


    Promotion P2 (0,PrixI,PrixF,DateD,DateF,Pourcentage);

    if(P2.verif_champs_vide2(ui->id_modifier_promotion->text())==false)
    {
        QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'ID' ne doit pas etre vide")) ;
    }
    else
    {
        if(P2.verif_champs_vide2(ui->Prix_initial_modifier->text())==false)
        {
            QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ ' PRIX INITIAL ' ne doit pas etre vide")) ;
        }
        else
        {
            if(P2.verif_champs_vide2(ui->Prix_final_modifier->text())==false)
            {
                QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'PRIX FINAL' ne doit pas etre vide")) ;
            }
            else
            {
                if(P2.verif_champs_vide1(ui->Date_initiale_modifier->text())==false)
                {
                    QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'DATE INITIALE' ne doit pas etre vide")) ;

                }
           else
        {
           if(P2.verif_champs_vide1(ui->Date_finale_modifier_promotion->text())==false)
         {
               QMessageBox::warning(this,tr("error"),tr("le champ 'DATE FINALE' ne doit pas etre vide")) ;
         }
         else
         {
               if(P2.verif_champs_vide2(ui->pourcentage_modifier_promotion->text())==false)
               {
                   QMessageBox::warning(this,tr("erreur de modification .!"),tr("le champ 'POURCENTAGE' ne doit pas etre vide")) ;
               }
    P2.modifier(id);


    ui->tab_promotion->setModel(P.afficher());//refresh
                     QMessageBox::information(nullptr, QObject::tr(" C fait !"),
                                       QObject::tr(" les informations concernant les promotions sont modifiées !\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);

}
        }
           }
           }
    }
}

//-------------------------------------------------------------------------------------------------------
/*
void GestionEventPromo::on_rechercher_event_textChanged(const QString &)
{
    Evennement E;
    if(ui->rechercher_event->text().isEmpty())
        {
            ui->tab_etudiant->setVisible(false);
            QSqlQuery *query=new QSqlQuery("SELECT * from evennements");
            QSqlQueryModel *model=new QSqlQueryModel();
            model->setQuery(*query);
            ui->tab_etudiant->setModel(model);
            ui->tab_etudiant->show();
            ui->tab_etudiant->resizeColumnsToContents();
            ui->tab_etudiant ->setVisible(true);
        }
    E.clear(ui->tab_etudiant);
    QString nom=ui->rechercher_event->text();



     E.rechercher2(ui->tab_etudiant,nom);


    if(ui->rechercher_event->text().isEmpty())
    {
        ui->tab_etudiant->setModel(E.afficher());
    }
}*/
/*
void GestionEventPromo::on_rechercher_event_textChanged(const QString &)
{
    Evennement E;
    if(ui->rechercher_event->text().isEmpty())
        {
            ui->tab_etudiant->setVisible(false);
            QSqlQuery *query=new QSqlQuery("SELECT * from evennements");
            QSqlQueryModel *model=new QSqlQueryModel();
            model->setQuery(*query);
            ui->tab_etudiant->setModel(model);
            ui->tab_etudiant->show();
            ui->tab_etudiant->resizeColumnsToContents();
            ui->tab_etudiant ->setVisible(true);
        }
    E.clear(ui->tab_etudiant);
   // QString nom=ui->rechercher_event->text();
    int id=ui->rechercher_event->text().toInt();
    QString nom=ui->rechercher_event->text();
    int dated=ui->rechercher_event->text().toInt();
    int datef=ui->rechercher_event->text().toInt();




     E.rechercher2(ui->tab_etudiant,id,nom,dated,datef);


    if(ui->rechercher_event->text().isEmpty())
    {
        ui->tab_etudiant->setModel(E.afficher());
    }
}
*/
//----------------------------------------------------------------------------------------------------------

void GestionEventPromo::on_radioButton_nom_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_nom());
}

void GestionEventPromo::on_radioButton_id_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_id());
}

void GestionEventPromo::on_radioButton_DateDebut_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_date_debut());
}

void GestionEventPromo::on_radioButton_DateFin_event_clicked()
{
    ui->tab_etudiant->setModel(E.afficher_tri_date_fin());
}



void GestionEventPromo::on_excel_clicked()
{

            QTableView *table;
                              table = ui->tab_promotion;
                              QString filters("mdb files (*.csv);;All files (*.*)");
                              QString defaultFilter("mdb files (*.csv)");
                              QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                                 filters, &defaultFilter);
                              QFile file(fileName);
                              QAbstractItemModel *model =  table->model();
                              if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                                  QTextStream data(&file);
                                  QStringList strList;
                                  for (int i = 0; i < model->columnCount(); i++) {
                                      if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                                          strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                                      else
                                          strList.append("");
                                  }
                                  data << strList.join(";") << "\n";
                                  for (int i = 0; i < model->rowCount(); i++) {
                                      strList.clear();
                                      for (int j = 0; j < model->columnCount(); j++) {
                                          if (model->data(model->index(i, j)).toString().length() > 0)
                                              strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                                          else
                                              strList.append("");
                                      }
                                      data << strList.join(";") + "\n";
                                  }
                                  file.close();
                                  QMessageBox::information(this,"Exporter To  export","Exporter En  export Avec Succées ");
}}

void GestionEventPromo::on_PDF_clicked()
{
    QString strStream;
                        QTextStream out(&strStream);

                        const int rowCount = ui->tab_promotion->model()->rowCount();
                        const int columnCount = ui->tab_promotion->model()->columnCount();

                        out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("strTitle")
                            <<  "</head>\n"
                            "<body bgcolor=#ffffff link=#5000A0>\n"

                           //     "<align='right'> " << datefich << "</align>"
                            "<center> <H1>Liste des promotions </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                        // headers
                        out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tab_promotion->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_promotion->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";

                        // data table
                        for (int row = 0; row < rowCount; row++) {
                            out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                            for (int column = 0; column < columnCount; column++) {
                                if (!ui->tab_promotion->isColumnHidden(column)) {
                                    QString data = ui->tab_promotion->model()->data(ui->tab_promotion->model()->index(row, column)).toString().simplified();
                                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                }
                            }
                            out << "</tr>\n";
                        }
                        out <<  "</table> </center>\n"
                            "</body>\n"
                            "</html>\n";

                  QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                   QPrinter printer (QPrinter::PrinterResolution);
                    printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setPaperSize(QPrinter::A4);
                  printer.setOutputFileName(fileName);

                   QTextDocument doc;
                    doc.setHtml(strStream);
                    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                    doc.print(&printer);

}

void GestionEventPromo::on_insert_try_linkActivated(QLabel *label1)
{
    label1 = new QLabel;
    label1->setPixmap(QPixmap("pastry.jpg"));
    label1->show();
}

/*void GestionEventPromo::sendMail()
{
    Mailling* mail = new Mailling(ui->uname_2->text(), ui->paswd_2->text(), ui->server_2->text(), ui->port_2->text().toInt());
    connect(mail, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    mail->sendMail(ui->uname_2->text(), ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->toPlainText());
}*/

void GestionEventPromo::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void GestionEventPromo::on_sendBtn_clicked()
{
    /*Mailling* mail = new Mailling(ui->uname_2->text(), ui->paswd_2->text(), ui->server_2->text(), ui->port_2->text().toInt());
    connect(mail, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    mail->sendMail(ui->uname_2->text(), ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->toPlainText());*/
    Mailling* mail = new Mailling(ui->uname_2->text(), ui->paswd_2->text(), ui->server_2->text(), ui->port_2->text().toInt());
    connect(mail, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    mail->sendMail(ui->uname_2->text(), ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->toPlainText());
}


void GestionEventPromo::on_InsertImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.png *.jpg)"));
    if(QString::compare(fileName, QString()) != 0 ){
        QImage image;
        bool valid = image.load(fileName);
        if(valid){

            //image = image.scaledToHeight(ui->lbl_image->height(), Qt::SmoothTransformation);
            image = image.scaledToWidth(ui->lbl_image->width(), Qt::SmoothTransformation);
            ui->lbl_image->setPixmap(QPixmap::fromImage(image));        }else {
}
    }
}


// Sounds



void GestionEventPromo::on_tab_promotion_activated(const QModelIndex &index)
{
    QString val=ui->tab_promotion->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("select * from pro where id LIKE '"+val+"'");


        if (query.exec())
        {
            while(query.next())
            {
                ui->id_modifier_promotion->setText(query.value(0).toString());
                ui->Prix_initial_modifier->setText(query.value(1).toString());
                ui->Prix_final_modifier->setText(query.value(2).toString());
                ui->Date_initiale_modifier->setText(query.value(3).toString());
                ui->Date_finale_modifier_promotion->setText(query.value(4).toString());
                ui->pourcentage_modifier_promotion->setText(query.value(5).toString());


            }
        }
        else
            QMessageBox::warning(this,"Erreur","Selectionner l'id de la promotion");
}


void GestionEventPromo::on_tab_etudiant_activated(const QModelIndex &index)
{
    QString val=ui->tab_etudiant->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("select * from evennements where ID_EVENT LIKE '"+val+"'");


        if (query.exec())
        {
            while(query.next())
            {
                ui->le_id_modifier->setText(query.value(0).toString());
                ui->le_nom_modifier->setText(query.value(1).toString());
                ui->le_Date_Debut_modifier->setText(query.value(2).toString());
                ui->le_Date_Fin_modifier->setText(query.value(3).toString());
            }
        }
        else
            QMessageBox::warning(this,"Erreur","Selectionner l'id de l'evennement");
}


void GestionEventPromo::on_rechercher_event_textChanged(const QString &arg1)
{
    QString rech;
          rech= arg1.toCaseFolded();
            QSqlQueryModel * model= new QSqlQueryModel();
        QSqlQuery* qry=new QSqlQuery();

         qry->prepare("SELECT * from evennements where NOM_EVENT like concat (:rech,'%')   or DATE_DEBUT like concat (:rech,'%') or DATE_FIN  like concat (:rech,'%') or Id_EVENT like concat (:rech,'%')    ");
         qry->bindValue(":rech",rech);
         qry->exec();
         model->setQuery(*qry);
         ui->tab_etudiant->setModel(model);
}

// calculator
void GestionEventPromo::digit_pressed()
{
    QPushButton * Button = (QPushButton*)sender();
    double labelNumber;
    QString NewLabel;

    if(( ui->pushButton_add->isChecked() || ui->pushButton_substract->isChecked()
            || ui->pushButton_multiply->isChecked() || ui->pushButton_divide->isChecked()) && (!userIsTypingSecondNumber))
    {
        labelNumber = Button->text().toDouble();
        userIsTypingSecondNumber = true;
        NewLabel = QString::number(labelNumber,'g',15);
    }
    else
    {
        if (ui->label_25->text().contains('.') && Button->text() == "0")
        {
            NewLabel = ui->label_25->text() + Button->text();
        }
        else
        {
            labelNumber = (ui->label_25->text() + Button->text()).toDouble();   //on peut cliquer bcp de chiffres
            NewLabel = QString::number(labelNumber,'g',15);

        }
    }

   // labelNumber = (ui->label->text() + Button->text()).toDouble();    //on peut cliquer bcp de chiffres
    NewLabel = QString::number(labelNumber,'g',15);  // on peut cliquer 15 chiffres
    ui->label_25->setText(NewLabel);
}


void GestionEventPromo::on_pushButton_decimal_released()
{
    ui->label_25->setText(ui->label_25->text() + ".");
}

void GestionEventPromo::unary_operation_pressed()
{
    QPushButton * Button = (QPushButton*)sender();
    double labelNumber;
    QString NewLabel;
    if(Button->text() == "+/-")
    {
        labelNumber = ui->label_25->text().toDouble();  // 1 click elle persiste - 2 clicks elle disparait
        labelNumber = labelNumber * -1;
        NewLabel = QString::number(labelNumber,'g',15);
        ui->label_25->setText(NewLabel);
    }
    if(Button->text() == "%")
    {
        labelNumber = ui->label_25->text().toDouble();  // 1 click elle persiste - 2 clicks elle disparait
        labelNumber = labelNumber * 0.01;
        NewLabel = QString::number(labelNumber,'g',15);
        ui->label_25->setText(NewLabel);
    }

}

void GestionEventPromo::on_pushButton_clear_released()
{
      ui->pushButton_add->setChecked(false);
      ui->pushButton_substract->setChecked(false);
      ui->pushButton_multiply->setChecked(false);
      ui->pushButton_divide->setChecked(false);

      userIsTypingSecondNumber = false;

      ui->label_25->setText("0");

}

void GestionEventPromo::on_pushButton_equals_released()
{
    double labelNumber , secondNum;
    QString newLabel;

    secondNum = ui->label_25->text().toDouble();

    if(ui->pushButton_add->isChecked())
        {
             labelNumber = FirstNum + secondNum;
             newLabel = QString::number(labelNumber,'g',15);
             ui->label_25->setText(newLabel);
             ui->pushButton_add->setChecked(false);
        }
    else if(ui->pushButton_substract->isChecked())
        {
        labelNumber = FirstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_25->setText(newLabel);
        ui->pushButton_substract->setChecked(false);
        }

   else if(ui->pushButton_multiply->isChecked())
        {
        labelNumber = FirstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_25->setText(newLabel);
        ui->pushButton_multiply->setChecked(false);
        }

    else if(ui->pushButton_divide->isChecked())
        {
        labelNumber = FirstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label_25->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
        }

    userIsTypingSecondNumber = false;
}

void GestionEventPromo::binary_operation_pressed()
{
    QPushButton * Button = (QPushButton*)sender();
    FirstNum = ui->label_25->text().toDouble();
    Button->setChecked(true);
}


//arduino
void GestionEventPromo::update_label()
{
     //qDebug()<<"Test";
     parsed_data=A.read_from_arduino();

       ui->temp_lcdNumber->display(parsed_data);

       alertt=parsed_data.toFloat();

       if (alertt>24)
       {
           ui->label_alert->setText("Temperature Elevée !!");
       }
       else {
            ui->label_alert->setText(" ");
       }
}



void GestionEventPromo::on_rechercher_promo_textChanged(const QString &arg1)
{
    QString rech;
          rech= arg1.toCaseFolded();
            QSqlQueryModel * model= new QSqlQueryModel();
        QSqlQuery* qry=new QSqlQuery();

         qry->prepare("SELECT * from pro where Date_Debut like concat (:rech,'%') ");
         qry->bindValue(":rech",rech);
         qry->exec();
         model->setQuery(*qry);
         //ui->tab_promotion->setModel(model);

           ui->label_26->setText(P.nbrePromo(rech));
}

//Timer
void GestionEventPromo::UpdateTime()
{
    ui->lbl_time_2->setText(QTime::currentTime().toString("hh:mm:ss"));
}



// Vente flash
void GestionEventPromo::on_VenteFlash_clicked()
{
    QString arg = P.VenteFlash();
   ui->label_Vente_Flash->setText(arg);
   QString rech;
         rech= arg.toCaseFolded();
           QSqlQueryModel * model= new QSqlQueryModel();
       QSqlQuery* qry=new QSqlQuery();
        qry->prepare("SELECT * from pro where Pourcentage like concat (:rech,'%')");
        qry->bindValue(":rech",rech);
        qry->exec();
        model->setQuery(*qry);
        ui->tab_promotion->setModel(model);
}


//play music

void GestionEventPromo::on_selection_clicked()
{
    QString fileName =  QFileDialog::getOpenFileName(this , "Selection");
    if(fileName.isEmpty())
    {
        return;
    }
    mMediaPlayer->setMedia(QUrl::fromLocalFile(fileName));
    mMediaPlayer->setVolume(ui->volume->value());
    on_play_clicked();
}

void GestionEventPromo::on_play_clicked()
{
   mMediaPlayer->play();
}

void GestionEventPromo::on_pause_clicked()
{
    mMediaPlayer->pause();
}

void GestionEventPromo::on_stop_clicked()
{
    mMediaPlayer->stop();
}

void GestionEventPromo::on_mute_clicked()
{
    if(ui->mute->text() == "Mute"){
    mMediaPlayer->setMuted(true);
    ui->mute->setText("Unmute");
    }else
    {
        mMediaPlayer->setMuted(false);
        ui->mute->setText("Mute");
    }
}

void GestionEventPromo::on_volume_valueChanged(int value)
{
  mMediaPlayer->setVolume(value);
}
