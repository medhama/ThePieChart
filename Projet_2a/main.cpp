#include "mainwindow.h"
#include "gestionlivraisons.h"
#include "gestioncommandes.h"

#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include <QStyleFactory>
#include <QFile>
#include <dialog.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion c;
    bool test=c.ouvrirConnexion();
    Dialog A;
    GestionLivraisons F;
    QFile file("C:/Users/Ahmed/Documents/Projet_2a/pics/darkorange.qss");
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        a.setStyle("plastique");
        a.setStyleSheet(styleSheet);
    if(test)
    {

        F.show();

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n""Click Cancel to exit."), QMessageBox::Cancel);

        // qDebug()<<"Connection successful";
    }
    else

        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n""Click Cancel to exit."), QMessageBox::Cancel);

    return a.exec();
}
