#include <QStyleFactory>
#include<QFile>
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "gestioneventpromo.h"
#include <QDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion c;
    bool test=c.ouvrirConnexion();
    MainWindow w;
    GestionEventPromo G;


    QFile file("C:/Users/fatma/Desktop/projet_Qt/ThePieChart/Gestion_Evennement_Promotion/darkorange.qss");
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        a.setStyle("plastique");
        a.setStyleSheet(styleSheet);
         if(test)
         {

             //w.show();
             G.show();

             QMessageBox::information(nullptr, QObject::tr("database is open"),
                         QObject::tr("connection successful.\n""Click Cancel to exit."), QMessageBox::Cancel);

             // qDebug()<<"Connection successful";
         }
         else

             QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                         QObject::tr("connection failed.\n""Click Cancel to exit."), QMessageBox::Cancel);

    return a.exec();
}
