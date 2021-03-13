#include "produit.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

Produit::Produit()
{

}
Produit::Produit(int id,QString nom,int QTE,float prixProd)
{
    this->id=id;
    this->nom=nom;
    this->QTE=QTE;
    this->prixProd=prixProd;


}

bool Produit::ajouter()
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    QString prixProd_string=QString::number(prixProd);
    QString qte_string=QString::number(QTE);
    query.prepare("INSERT INTO produit(idprod, nomprod, prixprod,qte) "
                  "VALUES (:idprod, :nomprod, :prixprod,:qte)");
    query.bindValue(":idprod", id_string);
    query.bindValue(":nomprod", nom);
    query.bindValue(":prixprod", prixProd_string);
    query.bindValue(":qte", qte_string);
    return query.exec();
   // return test;

}
QSqlQueryModel * Produit::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit");
         qDebug()<<"connection";
       /*  model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom")); */
    return model;
}
bool Produit::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from produit where IDPROD=:id");
    query.bindValue(":id",res);
    return query.exec();
}
