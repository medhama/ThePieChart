#include "clientaff.h"
#include "ui_clientaff.h"
#include "client.h"
#include "produit.h"
#include <QtDebug>
#include <QApplication>
#include <QMessageBox>
#include<QIntValidator>
#include<QComboBox>

ClientAff::ClientAff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientAff)
{
    ui->setupUi(this);
     ui->LE_cin->setValidator(new QIntValidator(0, 9999999, this));
     ui->Tab_client->setModel(etmp.afficher());
     ui->LE_ID1->setValidator(new QIntValidator(0, 9999999, this));
     ui->Tab_produit->setModel(etmp_prod.afficher());

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
    //Etudiant E(id,nom,prenom);
    bool test=E.ajouter();
    if(test==true)
    {
      qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Ajouter avec success\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_client->setModel(etmp.afficher());
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

void ClientAff::on_pushButton_5_clicked()
{
    int cin=ui->LE_CIN_Supp->text().toInt();
    Client C;
   // qDebug()<<id;

    C=C.SelectModif(cin);
    if(C.Get_cin()!=NULL)
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

void ClientAff::on_pushButton_6_clicked() //modification of client
{

    int cin=ui->LE_cin->text().toInt();
    QString nom=ui->LE_nom->text();
    QString prenom=ui->LE_prenom->text();
    QString adresse=ui->LE_adresse->text();
    QString email=ui->LE_email->text();
    int nbrpt=ui->LE_nbrpt->text().toInt();
    int NumTelephone=ui->LE_NumTelephone->text().toInt();

    Client C(cin,nom,prenom,adresse,email,nbrpt,NumTelephone);

    bool test=C.Modifer(cin);
    if(test==true)
    {
      qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Modifier avec success\n""click ok to exit"),QMessageBox::Ok);
      ui->Tab_client->setModel(etmp.afficher());
    }
    else
    {
        qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
        QObject::tr("modification non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }

}

void ClientAff::on_Rechercher_Client_button_clicked() //rechercher client
{
     QString nom=ui->SearchBar_Client->text();
     qDebug()<<nom;
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
