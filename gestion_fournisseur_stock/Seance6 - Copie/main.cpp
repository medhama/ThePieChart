#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "gestions.h"
#include "mail.h"
#include <QStyleFactory>
#include<QFile>
#include <QApplication>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Translate
              QTranslator t;

              QStringList Languages;
              Languages << "French" << "English"<< "Russian" ;
              QString lang = QInputDialog::getItem(NULL,"Select language","language",Languages);
              if(lang=="English"){
                  t.load("C:/Users/tarek/Desktop/projetqt/Seance6/english.qm");
              }
              else if(lang=="Russian"){
                     t.load("C:/Users/tarek/Desktop/projetqt/Seance6/russian.qm");
              }
              if(lang != "French"){
                  a.installTranslator(&t);
              }

    // end translate


    Connection c;
    bool test=c.createconnect();
      //MainWindow w;
      gestions w;
    //mail w;


      QFile file("C:/Users/tarek/Desktop/projetqt/Seance6/stylesheet/darkorange.qss");
          file.open(QFile::ReadOnly);
          QString styleSheet = QLatin1String(file.readAll());
          a.setStyle("plastique");
          a.setStyleSheet(styleSheet);





    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
