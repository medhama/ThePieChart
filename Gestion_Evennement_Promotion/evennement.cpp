#include "evennement.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include<QTableView>

Evennement::Evennement()
{
 Id_event = 0 ;
 Nom_event = " " ;
 Date_debut = 0;
 Date_fin = 0;
}
Evennement::Evennement(int Id_event, QString Nom_event, int Date_debut, int Date_fin)
{
    this->Id_event=Id_event;
    this->Nom_event=Nom_event;
    this->Date_debut=Date_debut;
    this->Date_fin=Date_fin;
}

int Evennement::getid()
{
    return Id_event;
}
QString Evennement::getNomEvent()
{
    return Nom_event;
}
int Evennement::getDateDebut()
{
    return Date_debut;
}
int Evennement::getDateFin()
{
    return Date_fin;
}
void Evennement::setid(int Id_event)
{
    this->Id_event=Id_event;
}
void Evennement::setNomEvent(QString Nom_event)
{
   this->Nom_event=Nom_event;
}
void Evennement::setDateDebut(int Date_debut)
{
    this->Date_debut=Date_debut;
}
void Evennement::setDateFin(int Date_fin)
{
    this->Date_fin=Date_fin;
}
bool Evennement::ajouter()
{

    QSqlQuery query;
  QString id_string= QString::number(Id_event);
  /*QString DateDebut_string= QString::number(Date_debut);
  QString DateFin_string= QString::number(Date_fin);*/


         query.prepare("INSERT INTO evennements (Id_EVENT, NOM_EVENT, DATE_DEBUT, DATE_FIN) "
                       "VALUES (:id, :NomE, :DateD, :DateF)");
         query.bindValue(":id",id_string);
         query.bindValue(":NomE", Nom_event);
         query.bindValue(":DateD",Date_debut);
         query.bindValue(":DateF", Date_fin);

         return query.exec();
}

QSqlQueryModel* Evennement::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


     model->setQuery("SELECT* FROM evennements");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Debut"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Fin"));


    return  model;
}

bool Evennement::supprimer(int Id_event)
{
    QSqlQuery query;
         query.prepare(" Delete from evennements where ID_EVENT=:id");
         query.bindValue(0, Id_event);

        return query.exec();
}
/*
bool Evennement:: verif_nom(QString ch)
{


    for(int i =0;i<ch.size();i++)
    {
        if(ch[i]<'0'||ch[i]>'15')
        {
            return false;
        }

    }
    return true;
}
*/
bool Evennement::verif_chaine(QString ch)
{
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]<'a' || ch[i]>'z')
        {
            return false;
        }
    }
    return true;
 }

bool Evennement::verif_champs_vide2(QString ch1)
{

    if(ch1!="")
    {
        return true;
    }
    return false;
}

bool Evennement::verif_champs_vide_nom(QString ch1)
{

    if(ch1!="")
    {
        return true;
    }
    return false;
}

bool Evennement::modifier(int Id_event)
{
    QSqlQuery qry;
    qry.prepare("Update evennements set NOM_EVENT = :NomE , DATE_DEBUT = :DateD , DATE_FIN = :DateF where Id_EVENT=:id");
    qry.bindValue(":id",Id_event);
    qry.bindValue(":NomE",Nom_event);
    qry.bindValue(":DateD",Date_debut);
    qry.bindValue(":DateF",Date_fin);
    return qry.exec();
}

void Evennement :: rechercher2(QTableView * table ,QString nom )
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from evennements where regexp_like(NOM_EVENT,:NomE);");
    query->bindValue(":NomE",nom);
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

void Evennement ::clear(QTableView *table)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->clear();
    table->setModel(model);
}

QSqlQueryModel * Evennement::afficher_tri_nom()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evennements order by NOM_EVENT asc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Fin"));
    return model;
}

QSqlQueryModel * Evennement::afficher_tri_id()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evennements order by ID_EVENT asc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Fin"));
    return model;
}

QSqlQueryModel * Evennement::afficher_tri_date_debut()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evennements order by DATE_DEBUT asc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Fin"));
    return model;
}

QSqlQueryModel * Evennement::afficher_tri_date_fin()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evennements order by DATE_FIN asc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Fin"));
    return model;
}

