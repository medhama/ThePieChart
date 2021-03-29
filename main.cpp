#include "mainwindow.h"
#include "databaseconnection.h"

#include <QtCore/QSettings>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connect c;
    bool test=c.openConnection();
    MainWindow w;





    if(test)
    {
        w.show();
        QMessageBox :: information(nullptr, QObject :: tr("database is open"),
                                   QObject::tr("Connection Successful\n" "Click Cancel To Exit"),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox :: critical(nullptr, QObject :: tr("database is not open"),
                                   QObject::tr("Connection Failed\n" "Click Cancel To Exit"),QMessageBox::Cancel);

    }

    return a.exec();


}
