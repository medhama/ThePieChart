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
    int QT_NE;

public:
    Produit_Stock();
    Produit_Stock(QString,int,int);
    bool ajouterSP();
    QSqlQueryModel * afficherIngredients(QString);
    QSqlQueryModel * afficherProduits(QString);
    bool supprimerProd_Stock(int,int);
    int maxProd(QString);
    void pdfProdStock(QString,int,QString);
    QString SelectStock(int);
};

#endif // PRODUIT_STOCK_H
