#include "fournisseur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
FOURNISSEUR::FOURNISSEUR()
{
    id=0;
    nomsoc="";
    lieu="";
}


FOURNISSEUR::FOURNISSEUR(int id ,QString nomsoc ,QString lieu,QString numero,QString typeeq){
    this->id=id;
    this->nomsoc=nomsoc;
    this->lieu=lieu;
    this->numero=numero;
    this->typeeq=typeeq;

}

int FOURNISSEUR::getid(){
return id;
}
QString FOURNISSEUR::getnomsoc(){
return nomsoc;
}
QString FOURNISSEUR::getlieu(){
return lieu;
}
QString FOURNISSEUR::getnumero(){
return numero;
}
QString FOURNISSEUR::gettypeeq(){
return typeeq;
}


void FOURNISSEUR::setid(int id ){
this->id=id;
}
void FOURNISSEUR::setnomsoc(QString nomsoc ){
this->nomsoc=nomsoc;
}

void FOURNISSEUR::setlieu(QString lieu){
this->lieu=lieu;
}

void FOURNISSEUR::setnumero(QString numero){
this->numero=numero;
}
void FOURNISSEUR::settypeeq(QString typeeq){
this->typeeq=typeeq;
}


bool FOURNISSEUR::ajouter(){
    QSqlQuery query;
    QString id_string= QString::number(id);
          query.prepare("INSERT INTO FOURNISSEUR (id, nomsoc, lieu , numero , typeeq) "
                        "VALUES (:id, :nomsoc, :lieu, :numero , :typeeq)");
          query.bindValue(":id", id_string);
          query.bindValue(":nomsoc", nomsoc);
          query.bindValue(":lieu", lieu);
          query.bindValue(":numero", numero);
          query.bindValue(":typeeq", typeeq);

         return query.exec();

                        }

QSqlQueryModel * FOURNISSEUR::afficher(){
    QSqlQueryModel * model=new QSqlQueryModel();
         model->setQuery("select * from FOURNISSEUR");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsoc"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("numero"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("typeeq"));



    return model;

}
bool FOURNISSEUR::supprimer(int id){
    QSqlQuery query;
          query.prepare("Delete from FOURNISSEUR where id=:id ");
          query.bindValue(0, id);

         return query.exec();
}

bool FOURNISSEUR:: Modifier_FOURNISSEUR(int id,QString nomsoc,QString lieu,QString numero,QString typeeq)
{
    QSqlQuery query;
    bool result=false;
    if(lieu>=0)
    {
    query.prepare("UPDATE FOURNISSEUR  SET  lieu= :lieu , nomsoc= :nomsoc , numero= :numero ,typeeq= :typeeq where id=:id ");
    query.bindValue(":lieu", lieu);
    query.bindValue(":nomsoc", nomsoc);
    query.bindValue(":numero", numero);
    query.bindValue(":typeeq", typeeq);
    query.bindValue(":id", id);

    if(query.exec())
        result=true;


    }
    return result;
}

bool FOURNISSEUR::FOURNISSEURExiste(QString nomsoc)
{
    int i=0;
    QSqlQuery query;
    query.prepare("SELECT * FROM FOURNISSEUR WHERE nomsoc =:nomsoc");
    query.bindValue(":nomsoc", nomsoc);
    if(query.exec())
    {
        while(query.next())
        {
            i++;

        }
    }


    if(i != 0)
        return true;
    else
        return false;
}
bool FOURNISSEUR:: verifierlieu(int   lieu)
{

    if(lieu>0 && lieu<=5500)
    { return true;}
    else return false;
}
bool FOURNISSEUR:: verifiertypeeq(int   typeeq)
{

    if(typeeq>0 && typeeq<=500500)
    { return true;}
    else return false;
}
bool FOURNISSEUR:: verifier_vide(QString line)
{

    if(line=="")
    { return false;}
    else return true;
}





