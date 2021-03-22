#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class FOURNISSEUR
{
public:
    FOURNISSEUR();
     FOURNISSEUR(int,QString,QString,QString,QString);
    int getid();
    QString getnomsoc();
    QString getlieu();
    QString getnumero();
    QString gettypeeq();

    void setid(int);
    void setnomsoc(QString);
    void setlieu(QString);
    void setnumero(QString);
    void settypeeq(QString);


    bool ajouter();
        QSqlQueryModel * afficher();

        bool supprimer(int);
        bool Modifier_FOURNISSEUR(int id,QString nomsoc,QString lieu,QString numero,QString typeeq);
        bool FOURNISSEURExiste(QString nomsoc);
        bool verifierlieu(int   lieu);
        bool verifiertypeeq(int   typeeq);
        bool verifier_vide(QString line);
private:
    int id ;
    QString nomsoc,lieu,numero,typeeq;
};

#endif // FOURNISSEUR_H




