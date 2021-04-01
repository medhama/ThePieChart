#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{ db=QSqlDatabase::addDatabase("QODBC");

db.setDatabaseName("source_projet2A");
db.setUserName("fatma");//inserer nom de l'utilisateur
db.setPassword("fatma");//inserer mot de passe de cet utilisateur

if (db.open())
return true;
    return  false;
}

void Connexion::fermerConnexion()
{db.close();}
