#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet_2A16");//inserer le nom de la source de données ODBC
db.setUserName("ayadi");//inserer nom de l'utilisateur
db.setPassword("SYSTEM");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
