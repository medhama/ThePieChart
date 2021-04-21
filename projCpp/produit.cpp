#include "produit.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QApplication>
#include <QtCore>

#include <QTextDocument>
#include <QTextCharFormat>
#include<QTextCursor>

Produit::Produit()
{

}
Produit::Produit(int id,QString nom,int QTE,float prixProd,QString Description)
{
    this->id=id;
    this->nom=nom;
    this->QTE=QTE;
    this->prixProd=prixProd;
    this->Description=Description;


}

bool Produit::ajouter()
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    QString prixProd_string=QString::number(prixProd);
    QString qte_string=QString::number(QTE);
    query.prepare("INSERT INTO produit(idprod, nomprod, prixprod,qte,Description) "
                  "VALUES (:idprod, :nomprod, :prixprod,:qte,:Description)");
    query.bindValue(":idprod", id_string);
    query.bindValue(":nomprod", nom);
    query.bindValue(":prixprod", prixProd_string);
    query.bindValue(":qte", qte_string);
    query.bindValue(":Description", Description);
    return query.exec();
   // return test;

}
QSqlQueryModel * Produit::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit");
         qDebug()<<"connection";
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom produit"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix produit"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Description"));
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
Produit Produit::SelectModif(int id)
{

    QSqlQuery query;
    QString res=QString::number(id);
    qDebug()<<"aaa1"<<res;
    query.prepare("Select * from PRODUIT where IDPROD=:id");
    query.bindValue(":id",res);
    query.exec();
    query.next();
    int idVal=query.value(0).toInt();
    QString NomVal=query.value(1).toString();
    float PrixProdVal=query.value(2).toFloat();
    int QTEVal=query.value(3).toInt();
    QString Description=query.value(4).toString();

//(int cin,QString nom,QString prenom,QString adresse,QString email,int nbr_point,int num_telephone)
    Produit P(idVal,NomVal,QTEVal,PrixProdVal,Description);

    return P;
}

void Produit::pdf(QString filename,int id)
{
  //  LE_ID_SUPP
    Produit p;
    p=p.SelectModif(id);
    //qDebug<< p.Get_nom().toString;
    qDebug()<<QString(this->nom);
    QString s = QDate::currentDate().toString();
    qDebug()<<QString(p.Get_nom());
    QString html =
            "<html>"
    "<head>"
        "<meta charset='utf-8' />"
    "</head>"

    "<div align=right>"
       +s+
    "</div>"
    "<div align=left>"

       "Produt Name: "+ p.Get_nom()+"<br>"
    "</div>"
    "<h1 align=center>Description du produit:" + p.Get_nom()+" </h1>"
    "<h3 align=justify>"
+p.Get_DESC()+
    "</h4>"
    "<div align=right>"
"Quantite: "
+QString::number(p.Get_QTE())+
            "<br>"
"Prix: "
+QString::number(p.Get_prixProd())+
"</div>"
/*
"<div width=50%>"
"<img src='C:/Users/Hamadi/Desktop/C++/ThePieChart/projCpp/pics/asset9.png'/>"
"</div>"
        */

;

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("tmp/"+filename);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    document.print(&printer);


}

bool Produit::Modifer(int id)
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    QString prix=QString::number(prixProd);
    QString QTEE=QString::number(QTE);
    query.prepare("UPDATE produit SET nomprod= :nomprod, prixprod= :prixprod, qte= :qte ,Description=:Description where idprod=:id");
    query.bindValue(":id", id_string);
    query.bindValue(":nomprod", nom);
    query.bindValue(":prixprod",prix);
    query.bindValue(":qte", QTEE);
    query.bindValue(":Description", Description);
    return query.exec();


}

QSqlQueryModel * Produit::rechercher(QString mot)
{
     QSqlQuery query;
     query.prepare("SELECT * FROM produit where ((IDPROD like :NOMC) or (NOMPROD like :NOMC) or (PRIXPROD like :NOMC) or "
        "(QTE like :NOMC) or (DESCRIPTION like :NOMC))");
     query.bindValue(":NOMC", mot);
     query.exec();

    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery(query);


    return model;
}


QSqlQueryModel * Produit::afficherTriPrixAsc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit order by PRIXPROD ASC");
    return model;
}
QSqlQueryModel * Produit::afficherTriPrixDesc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit order by PRIXPROD DESC");
    return model;
}
QSqlQueryModel * Produit::afficherTriQTAsc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit order by QTE ASC");
    return model;
}
QSqlQueryModel * Produit::afficherTriQTDesc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM produit order by QTE DESC");
    return model;
}

