#include "mainwindow.h"
#include "clientaff.h"
#include <QtDebug>
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QSslSocket>
#include <QDateTime>
#include "mainmenu.h"
#include <QStyleFactory>
#include<QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;

    QFont f;

    f.setFamily("Segoe MDL2 Assets");
    a.setFont(f);




    QFile file("C:/Users/Hamadi/Desktop/C++/ThePieChart/projCpp/qss/darkorange.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    a.setStyle("plastique");
    a.setStyleSheet(styleSheet);


   //qDebug() << QStyleFactory::keys();
  //  a.setStyle(styleSheet);

    bool test=c.createConnection();
    ClientAff d;
    qDebug() << "Device supports OpenSSL: " << QSslSocket::supportsSsl();
if(test==true)
{
    //m.show();
  d.show();


  qDebug()<<"connection reussite";
  //QMessageBox::information(nullptr,QObject::tr("database is open"),
    //                       QObject::tr("Connection successfull\n""click ok to exit"),QMessageBox::Ok);
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
