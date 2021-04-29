#ifndef STOCK_H
#define STOCK_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

//class Stock
class STOCK
{
public:
    STOCK();
     STOCK(int,QString,int,QString,int);
    int getid();
    QString getlibelle();
    int getquantite();
    QString getdatestock();
    int getprix();

    int get_total();

    void get_date(int*y,int*m,int*d);
    int nb_jours(int y,int m,int d);


    void setid(int);
    void setlibelle(QString);
    void setquantite(int);
    void setdatestock(QString);
    void setprix(int);


    bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
        bool Modifier_STOCK(int id,QString libelle,int quantite,QString datestock,int prix);
        bool STOCKExiste(QString libelle);
        bool verifierQuantite(int   quantite);
        bool verifierPrix(int   Prix);
        bool verifier_vide(QString line);
        QString SET_Date(int*y,int*m,int*d);
        QString Verifier_Date();



private:
    int id ,quantite,prix ;
    QString libelle,datestock;

};

#endif // STOCK_H




