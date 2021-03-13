#include "client.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
Client::Client()
{

}
Client::Client(int cin,QString nom,QString prenom,QString adresse,QString email,int nbr_point,int num_telephone)
{
    this->cin=cin;
    this->nom=nom;
    this->prenom=prenom;
    this->adresse=adresse;
    this->email=email;
    this->nbr_point=nbr_point;
    this->num_telephone=num_telephone;

}

bool Client::ajouter()
{
    QSqlQuery query;
    QString cin_string=QString::number(cin);
    QString nbr_point_string=QString::number(nbr_point);
    QString num_telephone_string=QString::number(num_telephone);
    query.prepare("INSERT INTO client(cin, nom, prenom,adresse,nbr_point,num_telephone,email) "
                  "VALUES (:cin, :forename, :surname,:adresse,:nbr_point,:num_telephone,:email)");
    query.bindValue(":cin", cin_string);
    query.bindValue(":forename", nom);
    query.bindValue(":surname", prenom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":nbr_point", nbr_point_string);
    query.bindValue(":num_telephone", num_telephone_string);
    query.bindValue(":email", email);
    return query.exec();
   // return test;

}
QSqlQueryModel * Client::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client");
         qDebug()<<"connection";
       /*  model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom")); */
    return model;
}
bool Client::supprimer(int cin)
{
    QSqlQuery query;
    QString res=QString::number(cin);
    query.prepare("Delete from client where CIN=:cin");
    query.bindValue(":cin",res);
    return query.exec();
}
