#include "client.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QSortFilterProxyModel>

#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include <QTextCharFormat>
#include<QTextCursor>

#include <QTextStream>


#include "QtSql/QtSql"
#include "QtSql/QSqlRecord"

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
QSqlQueryModel * Client::afficherTriNomAsc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by NOM ASC");
    return model;
}
QSqlQueryModel * Client::afficherTriNomDesc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by NOM DESC");
    return model;
}
QSqlQueryModel * Client::afficherTriPrenomAsc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by PRENOM ASC");
    return model;
}
QSqlQueryModel * Client::afficherTriPrenomDesc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by PRENOM DESC");
    return model;
}
QSqlQueryModel * Client::afficherTriNbr_PointAsc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by NBR_POINT ASC");
    return model;
}
QSqlQueryModel * Client::afficherTriNbr_PointDesc()
{
    QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("SELECT * FROM client order by NBR_POINT DESC");
    return model;
}

QSqlQueryModel * Client::rechercher(QString mot)
{
     QSqlQuery query;
     query.prepare("SELECT * FROM client where ((NOM like :NOMC) or (PRENOM like :NOMC) or (ADRESSE like :NOMC) or "
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

void Client::pdf(QString filename)
{
  //  LE_ID_SUPP
    Client p;
   // p=p.SelectModif(id);
    //qDebug<< p.Get_nom().toString;
    qDebug()<<QString(this->nom);
    qDebug()<<QString(p.Get_nom());

    QSqlQuery query;
    query.exec("SELECT * from Client");


  //  const int rowCount = query.size();
    const int columnCount = query.record().count();



    QString strStream;
    QTextStream out(&strStream);
  QString s = QDate::currentDate().toString();
  QString t = QTime::currentTime().toString();
    out <<  "<html>\n"
          "<head>\n"
          "<meta Content=\"Text/html; charset=Windows-1251\">\n"
          <<  QString("<title>%1</title>\n").arg("TITLE OF TABLE")
          <<  "</head>\n"
          "<body bgcolor=#ffffff link=#5000A0>\n"
    "<div align=right>"
       +s+
    "</div>"
    "<div align=left>"
       +t+
    "</div>"
            "<h1 align=center>Client List</h1>"
          "<table border=1 cellspacing=0 cellpadding=2>\n";

      // headers
      out << "<thead  align=center><tr bgcolor=#f0f0f0>";
      for (int column = 0; column < columnCount; column++)
        out << QString("<th>%1</th>").arg(query.record().fieldName(column));
      out << "</tr></thead>\n";

      while (query.next()) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
          QString data = query.value(column).toString();
          out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
        }
        out << "</tr>\n";
      }



     out <<  "</table>\n"
         "</body>\n"
         "</html>\n";

    QString html =
    "<div align=right>"
       "City, 11/11/2015"
    "</div>"
    "<div align=left>"+p.Get_nom()+

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
    document.setHtml(strStream);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("tmpClient/"+filename);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    document.print(&printer);


}
