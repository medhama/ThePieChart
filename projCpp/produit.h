#ifndef PRODUIT_H
#define PRODUIT_H

#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Produit
{
    QString nom,Description;
    int id,QTE;
    float prixProd;
public:
    Produit();
    Produit(int,QString,int,float,QString);

    int Get_id(){return id;}
    QString Get_nom(){return nom;}
    float Get_prixProd(){return prixProd;}
    int Get_QTE(){return QTE;}
    QString Get_DESC(){return Description;}


    void Set_id(int id){this->id=id;}
    void Set_nom(QString nom){this->nom=nom;}
    void Set_prixProd(float prixProd){this->prixProd=prixProd;}
    void Set_QTE(int QTE){this->QTE=QTE;}
    void Set_DESC(QString Description){this->Description=Description;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    Produit SelectModif(int);

    QSqlQueryModel * afficherTriPrixAsc();
    QSqlQueryModel * afficherTriPrixDesc();
    QSqlQueryModel * afficherTriQTAsc();
    QSqlQueryModel * afficherTriQTDesc();


    bool Modifer(int);
    void pdf(QString,int,QString);
    QSqlQueryModel * rechercher(QString);
};

#endif // PRODUIT_H
