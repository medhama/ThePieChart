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
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom produit"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix produit"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
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

//(int cin,QString nom,QString prenom,QString adresse,QString email,int nbr_point,int num_telephone)
    Produit P(idVal,NomVal,QTEVal,PrixProdVal);

    return P;
}

void Produit::pdf(QString filename,int id)
{
  //  LE_ID_SUPP
    Produit p;
    p=p.SelectModif(id);
    //qDebug<< p.Get_nom().toString;
    qDebug()<<QString(this->nom);
    qDebug()<<QString(p.Get_nom());
    QString html =
    "<div align=right>"
       "City, 11/11/2015"
    "</div>"
    "<div align=left>"+ p.Get_nom()+

       "Sender Name<br>"
       "street 34/56A<br>"
       "121-43 city"
    "</div>"
    "<h1 align=center>DOCUMENT TITLE</h1>"
    "<p align=justify>"
       "document content document content document content document content document content document content document content document content document content document content "
       "document content document content document content document content document content document content document content document content document content document content "
    "</p>"
    "<div align=right>sincerly</div>";

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("tmp/"+filename);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    document.print(&printer);


}
