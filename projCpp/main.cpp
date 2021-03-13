#include "mainwindow.h"
#include <QtDebug>
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include "clientaff.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;

    bool test=c.createConnection();
    ClientAff d;
if(test==true)
{
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
d.show();
   // w.show();
    return a.exec();
}
