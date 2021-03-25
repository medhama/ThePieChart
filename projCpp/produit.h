#ifndef PRODUIT_H
#define PRODUIT_H

#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Produit
{
    QString nom;
    int id,QTE;
    float prixProd;
public:
    Produit();
    Produit(int,QString,int,float);

    int Get_id(){return id;}
    QString Get_nom(){return nom;}
    float Get_prixProd(){return prixProd;}
    int Get_QTE(){return QTE;}


    void Set_id(int id){this->id=id;}
    void Set_nom(QString nom){this->nom=nom;}
    void Set_prixProd(float prixProd){this->prixProd=prixProd;}
    void Set_QTE(int QTE){this->QTE=QTE;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    Produit SelectModif(int);
    void pdf(QString,int);
};

#endif // PRODUIT_H
