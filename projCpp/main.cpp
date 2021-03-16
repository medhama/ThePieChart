#include "mainwindow.h"
#include "clientaff.h"
#include <QtDebug>
#include <QApplication>
#include "connection.h"
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;

    bool test=c.createConnection();
    ClientAff d;
if(test==true)
{
  d.show();
  qDebug()<<"connection reussite";
  QMessageBox::information(nullptr,QObject::tr("database is open"),
                           QObject::tr("Connection successfull\n""click ok to exit"),QMessageBox::Ok);
}
else
{
    qDebug()<<"connection failed";
    QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                             QObject::tr("Connection failed\n""click cancel to exit"),QMessageBox::Cancel);
}

   // w.show();
    return a.exec();
}
