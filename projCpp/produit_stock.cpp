#include "produit_stock.h"

Produit_Stock::Produit_Stock()
{

}


Produit_Stock::Produit_Stock(QString idProd,int idStock)
{
    this->idProd=idProd;
    this->idStock=idStock;
}


bool Produit_Stock::ajouterSP()
{
    QSqlQuery query;
    QString IDSTOCK_string=QString::number(idStock);
    query.prepare("INSERT INTO STOCK_PROD(IDPROD, IDSTOCK) "
                  "VALUES (:idprod, :idstock)");
    query.bindValue(":idprod", idProd);
    query.bindValue(":idstock", IDSTOCK_string);
    return query.exec();
}

QSqlQueryModel * Produit_Stock::afficherIngredients(QString idProd)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM STOCK inner join Stock_Prod on STOCK.ID=Stock_Prod.IDSTOCK where (Stock_Prod.IDPROD like :idProd)");
    query.bindValue(":idProd", idProd);
    query.exec();
    model->setQuery(query);
    return model;
}


QSqlQueryModel * Produit_Stock::afficherProduits(QString idStock)
{

    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM PRODUIT inner join Stock_Prod on PRODUIT.IDPROD=Stock_Prod.IDPROD where (Stock_Prod.IDSTOCK like :idStock)");
    query.bindValue(":idStock", idStock);
    query.exec();
    model->setQuery(query);
    return model;
}

bool Produit_Stock::supprimerProd_Stock(int idProd,int idStock)
{
    QSqlQuery query;
    QString res=QString::number(idProd);
    QString res2=QString::number(idStock);
    query.prepare("Delete from STOCK_PROD where IDPROD=:id and IDSTOCK=:id2");
    query.bindValue(":id",res);
    query.bindValue(":id2",res2);
    return query.exec();
}
