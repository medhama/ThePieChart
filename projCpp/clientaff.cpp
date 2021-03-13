#include "clientaff.h"
#include "ui_clientaff.h"
#include "client.h"
#include "produit.h"
#include <QtDebug>
#include <QMessageBox>
#include<QIntValidator>
ClientAff::ClientAff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientAff)
{
    ui->setupUi(this);

     ui->Tab_client->setModel(etmp.afficher());
     ui->Tab_produit->setModel(etmp_prod.afficher());
}

ClientAff::~ClientAff()
{
    delete ui;
}

void ClientAff::on_pushButton_clicked()
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
    }
    else
    {
        qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Ajout non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
    qDebug()<<"button clicked";
}

void ClientAff::on_pushButton_2_clicked()
{
    int cin=ui->LE_CIN_Supp->text().toInt();
    qDebug()<<cin;
    bool test=etmp.supprimer(cin);
    if(test==true)
    {
      //qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Suppression effectuee\n""click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        //qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Suppression non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
}
//Produit::Produit(int id,QString nom,int QTE,float prixProd)
void ClientAff::on_pushButton_3_clicked()
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
    }
    else
    {
        qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Ajout non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }
    qDebug()<<"button clicked";

}

void ClientAff::on_pushButton_4_clicked()
{
    int id=ui->LE_ID_SUPP->text().toInt();
    qDebug()<<id;
    bool test=etmp_prod.supprimer(id);
    if(test==true)
    {
      //qDebug()<<"connection reussite";
      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("Suppression effectuee\n""click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        //qDebug()<<"connection failed";
        QMessageBox::critical(nullptr,QObject::tr("Not ok"),
                                 QObject::tr("Suppression non effectue\n""click cancel to exit"),QMessageBox::Cancel);
    }

}
