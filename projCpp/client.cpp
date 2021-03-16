#include "client.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QSortFilterProxyModel>
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

QSqlQueryModel * Client::rechercher(QString mot)
{
     QSqlQuery query;
     query.prepare("SELECT * FROM client where ((CHARINDEX(:NOMC, NOM) > 0) or (PRENOM like :NOMC) or (ADRESSE like :NOMC) or "
        "(NBR_POINT like :NOMC) or (CIN like :NOMC) or (NUM_TELEPHONE like :NOMC) or (EMAIL like :NOMC))");
     query.bindValue(":NOMC", mot);
     query.exec();

    QSqlQueryModel * model= new QSqlQueryModel();
        // model.bindValue(":nomproduit", mot);
        //model->setFilterRegExp(QRegExp(mot, Qt::CaseInsensitive,QRegExp::FixedString));

         model->setQuery(query);
        // qDebug()<<"connection recherche";


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
Client Client::SelectModif(int cinn)
{
   /* QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client where CIN=:cin");
         qDebug()<<"connection";

    return model; */


    QSqlQuery query;
    QString res=QString::number(cinn);
    query.prepare("Select * from client where CIN=:cin");
    query.bindValue(":cin",res);
    query.exec();
    query.next();
    int cinVal=query.value(0).toInt();
    QString NomVal=query.value(1).toString();
    QString PrenomVal=query.value(2).toString();
    QString AdresseVal=query.value(3).toString();
    int Nbr_pointVal=query.value(4).toInt();
    int Num_telephoneVal=query.value(5).toInt();
    QString EmailVal=query.value(6).toString();
//(int cin,QString nom,QString prenom,QString adresse,QString email,int nbr_point,int num_telephone)
    Client C(cinVal,NomVal,PrenomVal,AdresseVal,EmailVal,Nbr_pointVal,Num_telephoneVal);
  /*  qDebug()<<cinVal<<"vall";
    qDebug()<<NomVal<<"vallNom";
    qDebug()<<PrenomVal<<"vallPrenom";
    qDebug()<<AdresseVal<<"vallAdresse";
    qDebug()<<Nbr_pointVal<<"vallNbr point";
    qDebug()<<Num_telephoneVal<<"vallNumero telephone";
    qDebug()<<EmailVal<<"vall email"; */
    //C=query.value();
    return C;
}
bool Client::Modifer(int cin)
{
    QSqlQuery query;
    QString cin_string=QString::number(cin);
    QString nbr_point_string=QString::number(nbr_point);
    QString num_telephone_string=QString::number(num_telephone);
    query.prepare("UPDATE client SET nom= :forename, prenom= :surname,adresse= :adresse,nbr_point= :nbr_point,num_telephone= :num_telephone,email= :email where CIN=:cin");
    query.bindValue(":cin", cin_string);
    query.bindValue(":forename", nom);
    query.bindValue(":surname", prenom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":nbr_point", nbr_point_string);
    query.bindValue(":num_telephone", num_telephone_string);
    query.bindValue(":email", email);
    return query.exec();


}