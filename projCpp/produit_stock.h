#ifndef PRODUIT_STOCK_H
#define PRODUIT_STOCK_H


#include<QString>
#include <QObject>
#include <QWidget>
#include"produit.h"

class Produit_Stock : public Produit
{
    QString idProd;
    int idStock;

public:
    Produit_Stock();
    Produit_Stock(QString,int);
    bool ajouterSP();
    QSqlQueryModel * afficherIngredients(QString);
    QSqlQueryModel * afficherProduits(QString);
    bool supprimerProd_Stock(int,int);
};

#endif // PRODUIT_STOCK_H
