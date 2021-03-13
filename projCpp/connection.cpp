#include "connection.h"
#include "QSqlDatabase"

Connection::Connection()
{

}

bool Connection::createConnection(){
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("mohamed");
    db.setPassword("123456");
    if(db.open())
    {
        test=true;
    }

    return test;

}
