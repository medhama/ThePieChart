#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    db=QSqlDatabase::addDatabase("QODBC");

db.setDatabaseName("test-bd");
db.setUserName("ahmed");//inserer nom de l'utilisateur
db.setPassword("123456789");//inserer mot de passe de cet utilisateur


if (db.open())
return true;
    return  false;
}
void Connexion::fermerConnexion()
{db.close();}
