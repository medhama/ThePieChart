#include "databaseconnection.h"
//verifydatabase
Connect::Connect()
{

}

bool Connect::openConnection()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Thepiechart");
    db.setUserName("tahe");
    db.setPassword("SYSTEM");

    if(db.open())
    {
        test=true;
    }

    return test;
}

void Connect::closeConnection()
{
    db.close();
}
