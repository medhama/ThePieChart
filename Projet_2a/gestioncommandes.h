#ifndef GESTIONCOMMANDES_H
#define GESTIONCOMMANDES_H
#include <QSqlQueryModel>
#include <QDialog>
#include <QString>

class GestionCommandes
{
public:
    GestionCommandes();
    GestionCommandes(int,int,int,QString,QString);
    int getid();
    int getprix_co();
    int getQuantite_co();
    QString getnom_cli_co();
    QString getemail_Client_co();
    void setid(int);
    void setprix_co(int);
    void setQuantite_co(int);
    void setnom_cli_co(QString);
    void setemail_Client_co(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherTrieasc();
    QSqlQueryModel* afficherTriedesc();
    bool supprimer(int);
    bool modifier_com(QString);
private:
    int id,prix_co,Quantite_co;
    QString nom_cli_co, email_Client_co;


};

#endif // GESTIONCOMMANDES_H
