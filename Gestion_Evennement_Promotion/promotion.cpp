#include "promotion.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Promotion::Promotion()
{
    id = 0;
    Prix_initial = 0;
    Prix_final = 0;
    Date_Debut = "";
    Date_Fin ="";
    Pourcentage = 0;
}
Promotion::Promotion(int id , int Prix_initial , int Prix_final ,QString Date_Debut ,QString Date_Fin , int Pourcentage)
{
    this->id=id;
    this->Prix_initial=Prix_initial;
    this->Prix_final=Prix_final;
    this->Date_Debut=Date_Debut;
    this->Date_Fin=Date_Fin;
    this->Pourcentage=Pourcentage;
}
int Promotion::getid()
{
    return id;
}
int Promotion::getPrixInitial()
{
    return Prix_initial;
}

int Promotion::getPrixFinal()
{
    return Prix_final;
}
QString Promotion::getDateDebut()
{
    return Date_Debut;
}
QString Promotion::getDateFin()
{
    return Date_Fin;
}
int Promotion::getPourcentage()
{
    return Pourcentage;
}

void Promotion::setid(int id)
{
    this->id=id;
}

void Promotion::setPrixInitial(int Prix_initial )
{
    this->Prix_initial=Prix_initial;
}

void Promotion::setPrixFinal(int Prix_final)
{
    this->Prix_final=Prix_final;
}
void Promotion::setDateDebut(QString Date_Debut)
{
    this->Date_Debut=Date_Debut;
}
void Promotion::setDateFin(QString Date_Fin)
{
    this->Date_Fin=Date_Fin;
}
void Promotion::setPourcentage(int Pourcentage)
{
    this->Pourcentage=Pourcentage;
}
bool Promotion::ajouter()
{
    QSqlQuery query;
  QString id_string= QString::number(id);
 QString prixinit= QString::number(Prix_initial);
  /*QString DateDebut_string= QString::number(Date_debut);
  QString DateFin_string= QString::number(Date_fin);
  */
 QString prixfin= QString::number(Prix_final);


         query.prepare("INSERT INTO PRO (id , Prix_initial , Prix_final ,  Date_Debut ,  Date_Fin , Pourcentage ) "
                       "VALUES (:id , :Prix_initial , :Prix_final , :Date_Debut , :Date_Fin , :Pourcentage)");
         query.bindValue(":id",id_string);
         query.bindValue(":Prix_initial", prixinit);
        query.bindValue(":Prix_final",prixfin);
         query.bindValue(":Date_Debut", Date_Debut);
         query.bindValue(":Date_Fin", Date_Fin);
          // query.bindValue(":DateD",DateDebut_string);
         // query.bindValue(":DateF", DateFin_string);
         query.bindValue(":Pourcentage", Pourcentage);

         return query.exec();

}
QSqlQueryModel* Promotion::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


     model->setQuery("SELECT* FROM pro");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identenfiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix Initial"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix Final"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Initiale"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Finale"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("Pourcentage"));

    return  model;
}
bool Promotion::supprimer(int id)
{
    QSqlQuery query;
         query.prepare(" Delete from pro where id=:id");
         query.bindValue(0, id);

        return query.exec();
}

/*
bool Promotion:: verif(QString ch)
{
    for(int i =0;i<ch.size();i++)
    {
        if(ch[i]<'0'||ch[i]>'9')
        {
            return false;
        }

    }
    return true;
}
*/

bool Promotion::verif_chaine(QString ch)
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

bool Promotion::verif_champs_vide2(QString ch1)
{

    if(ch1!="")
    {
        return true;
    }
    return false;
}

bool Promotion::verif_champs_vide1(QString ch1)
{

    if(ch1!="")
    {
        return true;
    }
    return false;
}

bool Promotion::modifier(int id )
{
    QSqlQuery qry;
    qry.prepare("Update pro set Prix_initial = :Prix_initial , Prix_final = :Prix_final , Date_Debut = :Date_Debut , Date_Fin = :Date_Fin , Pourcentage = :Pourcentage where id=:id");
    qry.bindValue(":id",id);
    qry.bindValue(":Prix_initial",Prix_initial);
    qry.bindValue(":Prix_final",Prix_final);
    qry.bindValue(":Date_Debut",Date_Debut);
    qry.bindValue(":Date_Fin",Date_Fin);
    qry.bindValue(":Pourcentage",Pourcentage);

    return qry.exec();
}


QString Promotion::nbrePromo(QString ch)
{
    QSqlQuery query;
         query.prepare("SELECT COUNT(id) FROM pro where (Date_Debut like :Date_Debut)");
         query.bindValue(":Date_Debut", ch);
         int n=0;
            if(query.exec())
            {  while (query.next())
                {  n=query.value(0).toInt();
                    qDebug()<<n; } }
            QString S = QString::number(n);
       return S;
}


