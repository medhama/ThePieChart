#include "mainwindow.h"
#include "clientaff.h"
#include "ui_clientaff.h"
#include "client.h"
#include "produit.h"
#include <QtDebug>
#include <QApplication>
#include <QMessageBox>
#include<QIntValidator>
#include<QComboBox>
#include<SmtpMime>
#include <QSslSocket>
#include <QCoreApplication>




ClientAff::ClientAff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientAff)
{
    ui->setupUi(this);
     ui->LE_cin->setValidator(new QIntValidator(0, 9999999, this));
     ui->Tab_client->setModel(etmp.afficher());
     ui->LE_ID1->setValidator(new QIntValidator(0, 9999999, this));
     ui->Tab_produit->setModel(etmp_prod.afficher());
    ui->pushButton_6->setEnabled(false);
    qDebug()<<QSslSocket::supportsSsl() << QSslSocket::sslLibraryBuildVersionString() << QSslSocket::sslLibraryVersionString();
}

ClientAff::~ClientAff()
{
    delete ui;
}

void ClientAff::on_pushButton_clicked() //ajouter client
{
    int cin=ui->LE_cin->text().toInt();
    QString nom=ui->LE_nom->text();
    QString prenom=ui->LE_prenom->text();
    QString adresse=ui->LE_adresse->text();
    QString email=ui->LE_email->text();
    int nbrpt=ui->LE_nbrpt->text().toInt();
    int NumTelephone=ui->LE_NumTelephone->text().toInt();

    Client E(cin,nom,prenom,adresse,email,nbrpt,NumTelephone);
    ui->LE_cin->clear();
    bool test=E.ajouter();
    if(test==true)
    {
      qDebug()<<"Ajouter avec success";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Ajouter avec success\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_client->setModel(etmp.afficher());
      ui->LE_cin->clear();
      ui->LE_nom->clear();
      ui->LE_prenom->clear();
      ui->LE_adresse->clear();
      ui->LE_email->clear();
      ui->LE_nbrpt->clear();
      ui->LE_NumTelephone->clear();
    }
    else
    {
        qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Ajout non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
    qDebug()<<"button clicked";
}

void ClientAff::on_pushButton_2_clicked() //supprimer client
{
    int cin=ui->LE_CIN_Supp->text().toInt();
    qDebug()<<cin;
    bool test=etmp.supprimer(cin);
    if(test==true)
    {
      //qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Suppression effectuee\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_client->setModel(etmp.afficher());
    }
    else
    {
        //qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Suppression non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
}
//Produit::Produit(int id,QString nom,int QTE,float prixProd)

void ClientAff::on_pushButton_3_clicked() //ajouter produit
{
    int id=ui->LE_ID1->text().toInt();
    QString nom=ui->LE_NOM1->text();
    int QTE=ui->LE_QT1->text().toInt();
    float prixProd=ui->LE_PRIX1->text().toFloat();

    Produit E(id,nom,QTE,prixProd);
    //Etudiant E(id,nom,prenom);
    bool test=E.ajouter();
    if(test==true)
    {
      qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Ajouter avec success\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_produit->setModel(etmp_prod.afficher());
    }
    else
    {
        qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Ajout non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
    qDebug()<<"button clicked";

}

void ClientAff::on_pushButton_4_clicked() //supprimer produit
{
    int id=ui->LE_ID_SUPP->text().toInt();
    qDebug()<<id;
    bool test=etmp_prod.supprimer(id);
    if(test==true)
    {
      //qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Suppression effectuee\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_produit->setModel(etmp_prod.afficher());
    }
    else
    {
        //qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Suppression non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }

}

void ClientAff::on_pushButton_5_clicked() //modifier 1 client
{
    int cin=ui->LE_CIN_Supp->text().toInt();
    Client C;
   // qDebug()<<id;

    ui->pushButton->setEnabled(false);
    ui->LE_cin->setEnabled(false);
    C=C.SelectModif(cin);
    ui->pushButton_6->setEnabled(true);
    if(C.Get_cin()!=0)
    {

   ui->LE_cin->setText(QString(QString::number(C.Get_cin())));
   //int cinn=ui->LE_cin->text().toInt();

   ui->LE_nom->setText(QString(C.Get_nom()));
   //QString nomm=ui->LE_nom->text();

   ui->LE_prenom->setText(QString(C.Get_prenom()));
   //QString prenomm=ui->LE_prenom->text();

   ui->LE_adresse->setText(QString(C.Get_adresse()));
   //QString adresse=ui->LE_adresse->text();

   ui->LE_email->setText(QString(C.Get_email()));
  // QString email=ui->LE_email->text();

   ui->LE_NumTelephone->setText(QString(QString::number(C.Get_NumTelephone())));
  // int numTelephone=ui->LE_NumTelephone->text().toInt();

   ui->LE_nbrpt->setText(QString(QString::number(C.Get_nbrpt())));
   // int nbrPoint=ui->LE_nbrpt->text().toInt();
   // qDebug()<<cinn<<"CinModif1";
    qDebug()<<C.Get_cin()<<"CinModif";
}
    //bool test= etmp.Modif()

}

void ClientAff::on_pushButton_6_clicked() //confirmation modification of client
{

    int cin=ui->LE_cin->text().toInt();
    QString nom=ui->LE_nom->text();
    QString prenom=ui->LE_prenom->text();
    QString adresse=ui->LE_adresse->text();
    QString email=ui->LE_email->text();
    int nbrpt=ui->LE_nbrpt->text().toInt();
    int NumTelephone=ui->LE_NumTelephone->text().toInt();

    Client C(cin,nom,prenom,adresse,email,nbrpt,NumTelephone);
    ui->pushButton->setEnabled(true);
    ui->LE_cin->setEnabled(true);

    bool test=C.Modifer(cin);
    if(test==true)
    {
     // qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Modifier avec success\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_client->setModel(etmp.afficher());
      ui->LE_cin->clear();
      ui->LE_nom->clear();
      ui->LE_prenom->clear();
      ui->LE_adresse->clear();
      ui->LE_email->clear();
      ui->LE_nbrpt->clear();
      ui->LE_NumTelephone->clear();
    }
    else
    {
        //qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
        QObject::tr("modification non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
    ui->pushButton_6->setEnabled(false);

}

void ClientAff::on_Rechercher_Client_button_clicked() //rechercher client
{
     QString nom=ui->SearchBar_Client->text();
    // qDebug()<<nom;
    ui->Tab_client->setModel(etmp.rechercher(nom));

}

void ClientAff::on_SortButton_clicked()
{
    int value=ui->comboBox1->currentIndex();

    //qDebug()<<value;
    if (value==0)
    {
        ui->Tab_client->setModel(etmp.afficherTriNomDesc());

    }
    else if (value==1)
    {
        ui->Tab_client->setModel(etmp.afficherTriNomAsc());

    }
    else if (value==2)
    {
        ui->Tab_client->setModel(etmp.afficherTriPrenomDesc());

    }
    else if (value==3)
    {
        ui->Tab_client->setModel(etmp.afficherTriPrenomAsc());
    }
    else if (value==4)
    {
        ui->Tab_client->setModel(etmp.afficherTriNbr_PointAsc());
    }
    else if (value==5)
    {
        ui->Tab_client->setModel(etmp.afficherTriNbr_PointDesc());
    }

}

void ClientAff::on_SendMail_clicked()
{
   // QApplication a(argc, argv);

      // This is a first demo application of the SmtpClient for Qt project

      // First we need to create an SmtpClient object
      // We will use the Gmail's smtp server (smtp.gmail.com, port 465, ssl)

      SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

      // We need to set the username (your email address) and the password
      // for smtp authentification.

      smtp.setUser("visitunisia1@gmail.com");
      smtp.setPassword("123456789.V");

      // Now we create a MimeMessage object. This will be the email.

      MimeMessage message;

      message.setSender(new EmailAddress("visitunisia1@gmail.com", "Med fath"));
      message.addRecipient(new EmailAddress("mohamedhamadifathallah@gmail.com", "Carlos"));
      QString subj= ui->LE_Subject_Mail->text();
      message.setSubject(subj);

      QString MainMessage= ui->PTE_Message_Mail->toPlainText();

      // Now add some text to the email.
      // First we create a MimeText object.

      MimeText text;

      text.setText(MainMessage);

      // Now add it to the mail

      message.addPart(&text);

      // Now we can send the mail

      smtp.connectToHost();
      smtp.login();
      if(smtp.sendMail(message))
      {
        QMessageBox::information(this,"OK","Mail Sent !");
      }
      else
      {
          QMessageBox::critical(this,"error","Mail not sent !");
      }
      smtp.quit();

}

void ClientAff::on_CreatePDF_clicked()
{
    int idPDF=ui->LE_ID_SUPP->text().toInt();
    QString s = QDateTime::currentDateTime().toString();
    s.replace(" ","_");
    s.replace(":",".");
    qDebug() << s;

    Produit p;
    p.SelectModif(idPDF);
    p.pdf(s+".pdf",idPDF);
}
//
void ClientAff::on_CreateClientPdfFile_clicked()
{
   // int idPDF=ui->LE_ID_SUPP->text().toInt();
    QString s = QDateTime::currentDateTime().toString();
    s.replace(" ","_");
    s.replace(":",".");
    qDebug() << s;
    Client C;
    C.pdf(s+".pdf");



}
