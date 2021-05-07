#include "produit_stock.h"
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
#include<QFileDialog>
#include <QWidget>
#include"client.h"
#include <QSqlRecord>
Produit_Stock::Produit_Stock()
{

}


Produit_Stock::Produit_Stock(QString idProd,int idStock,int QT_NE)
{
    this->idProd=idProd;
    this->idStock=idStock;
    this->QT_NE=QT_NE;
}


bool Produit_Stock::ajouterSP()
{
    QSqlQuery query;
    QString IDSTOCK_string=QString::number(idStock);
    QString QT_NE_String=QString::number(QT_NE);
    query.prepare("INSERT INTO STOCK_PROD(IDPROD, IDSTOCK,QT_NE) "
                  "VALUES (:idprod, :idstock,:QT_NE)");
    query.bindValue(":idprod", idProd);
    query.bindValue(":idstock", IDSTOCK_string);
    query.bindValue(":QT_NE", QT_NE_String);
    return query.exec();
}

QSqlQueryModel * Produit_Stock::afficherIngredients(QString idProd)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM STOCK inner join Stock_Prod on STOCK.ID=Stock_Prod.IDSTOCK where (Stock_Prod.IDPROD like :idProd)");
    query.bindValue(":idProd", idProd);
    query.exec();
    model->setQuery(query);
    return model;
}

QString Produit_Stock::SelectStock(int idStock)
{
    QSqlQuery query;
    QString res=QString::number(idStock);
    query.prepare("Select * from Stock where ID=:idStock");
    query.bindValue(":idStock",res);
    query.exec();
    query.next();
    QString LibelleVal=query.value(1).toString();

    return LibelleVal;
}


QSqlQueryModel * Produit_Stock::afficherProduits(QString idStock)
{

    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM PRODUIT inner join Stock_Prod on PRODUIT.IDPROD=Stock_Prod.IDPROD where (Stock_Prod.IDSTOCK like :idStock)");
    query.bindValue(":idStock", idStock);
    query.exec();
    model->setQuery(query);
    return model;
}

int Produit_Stock::maxProd(QString idProd)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM STOCK inner join Stock_Prod on STOCK.ID=Stock_Prod.IDSTOCK where (Stock_Prod.IDPROD like :idProd)");
    query.bindValue(":idProd", idProd);

    int mini=-1;
    if(query.exec())
    {
    while(query.next())
    {
        int Quantitee=query.value(2).toInt();
        int besoinn=query.value(7).toInt();
        int k=Quantitee;
        int count=0;
        while(k>besoinn)
        {
            count++;
            k=k-besoinn;
        }
        if(mini==-1)
        {
            mini=count;
        }
        else if(count<mini)
        {
            mini=count;
        }

        qDebug()<<besoinn;
    }

        qDebug()<<"nb de produit egale a "<<mini;
    }
    return mini;
}

bool Produit_Stock::supprimerProd_Stock(int idProd,int idStock)
{
    QSqlQuery query;
    QString res=QString::number(idProd);
    QString res2=QString::number(idStock);
    query.prepare("Delete from STOCK_PROD where IDPROD=:id and IDSTOCK=:id2");
    query.bindValue(":id",res);
    query.bindValue(":id2",res2);
    return query.exec();
}



void Produit_Stock::pdfProdStock(QString filename,int id,QString filepath)
{
    //  LE_ID_SUPP
     // p=p.SelectModif(id);
      //qDebug<< p.Get_nom().toString;

        QString id1=QString::number(id);

      QSqlQuery query;
      query.prepare("SELECT * FROM STOCK inner join Stock_Prod on STOCK.ID=Stock_Prod.IDSTOCK where (Stock_Prod.IDPROD like :idProd)");
      query.bindValue(":idProd", id1);

      query.exec();



    //  const int rowCount = query.size();
      const int columnCount = query.record().count();


        Produit P;
        P=P.SelectModif(id);

        int valueA=this->maxProd(id1);

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
              "<h1 align=center>Produit: "
+ P.Get_nom() +
"</h1>"
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



       out <<  "</table>\n";

       out<< "<h2>Max produit possible: "
+ QString::number(valueA) +
"</h2>"
"<br><br>";
      out<<"<img  src='pics/asset9.png' width='100' height='100'/>"
           "</body>\n"
           "</html>\n";



      QTextDocument document;
      document.setHtml(strStream);

      QPrinter printer(QPrinter::PrinterResolution);
      printer.setOutputFormat(QPrinter::PdfFormat);
      printer.setPaperSize(QPrinter::A4);
      printer.setOutputFileName(filepath+"/"+filename);
      printer.setPageMargins(QMarginsF(15, 15, 15, 15));

      document.print(&printer);



}
