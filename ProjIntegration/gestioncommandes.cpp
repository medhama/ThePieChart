#include "gestioncommandes.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
GestionCommandes::GestionCommandes()
{
id=0; prix_co=0; Quantite_co=0;nom_cli_co="";email_Client_co="";
}

GestionCommandes::GestionCommandes(int id,int prix_co,int Quantite_co,QString nom_cli_co,QString email_Client_co)
{this->id=id; this->prix_co=prix_co; this->Quantite_co=Quantite_co; this->nom_cli_co=nom_cli_co; this->email_Client_co=email_Client_co;}
int GestionCommandes::getid(){return id;}
int GestionCommandes::getprix_co(){return prix_co;}
int GestionCommandes::getQuantite_co(){return Quantite_co;}
QString GestionCommandes::getnom_cli_co(){return  nom_cli_co;}
QString GestionCommandes::getemail_Client_co(){return email_Client_co;}
void GestionCommandes::setid(int id){this->id=id;}
void GestionCommandes::setprix_co(int prix_co){this->prix_co=prix_co;}
void GestionCommandes::setQuantite_co(int Quantite_co){this->Quantite_co=Quantite_co;}
void GestionCommandes::setnom_cli_co(QString nom_cli_co){this->nom_cli_co=nom_cli_co;}
void GestionCommandes::setemail_Client_co(QString email_Client_co){this->email_Client_co=email_Client_co;}
bool GestionCommandes::ajouter()
{

    QSqlQuery query;
  QString id_string= QString::number(id);
         query.prepare("INSERT INTO commandes (id, prix, quantité,nomclient,emailclient) "
                       "VALUES (:id, :price, :quantiti, :name, :mail)");
         query.bindValue(":id",id_string);
         query.bindValue(":price", prix_co);
         query.bindValue(":quantiti", Quantite_co);
         query.bindValue(":name", nom_cli_co);
         query.bindValue(":mail", email_Client_co);
        return query.exec();

}
bool GestionCommandes::supprimer(int id)
{
    QSqlQuery query;
         query.prepare(" Delete from commandes where id=:id");
         query.bindValue(0, id);

        return query.exec();


}
QSqlQueryModel* GestionCommandes::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM commandes ORDER BY id");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nomclient"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emailclient"));



  return  model;
}
QSqlQueryModel* GestionCommandes::afficherTrieasc()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM commandes ORDER BY quantité");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nomclient"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emailclient"));



  return  model;
}
QSqlQueryModel* GestionCommandes::afficherTriedesc()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM commandes ORDER BY quantité desc");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nomclient"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emailclient"));



  return  model;
}
QSqlQueryModel* GestionCommandes::afficherTrieasc1()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM commandes ORDER BY prix");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nomclient"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emailclient"));



  return  model;
}
QSqlQueryModel* GestionCommandes::afficherTriedesc1()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM commandes ORDER BY prix desc");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nomclient"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("Emailclient"));



  return  model;
}


bool GestionCommandes::modifier_com(QString idc_rechercher)
{   QSqlQuery query;
    bool Testquery=false;
    QSqlQuery qry;
    qry.prepare("SELECT id FROM commandes where id=?;");
    qry.addBindValue(idc_rechercher);
    bool exist=false;
    if(qry.exec())
        if(qry.next())
            {
            QVariant ch=qry.value(0);
            QString verif = QVariant(ch).toString();
            qDebug()<<verif;
            if(verif==idc_rechercher)
                exist=true;
             }
    if(exist)
       {
            if(prix_co!=0)
            {
                query.prepare("UPDATE commandes SET prix =? WHERE id='"+idc_rechercher+"';");
                query.addBindValue(prix_co);query.exec();Testquery=true;

            }
            if(Quantite_co!=0)
            {

                query.prepare("UPDATE commandes SET quantité =? WHERE id='"+idc_rechercher+"';");
                query.addBindValue(Quantite_co);query.exec();Testquery=true;
            }
            if(nom_cli_co!="")
            {//nom_cli_co=nom_cli_co.toUpper();
                query.prepare("UPDATE commandes SET nomclient =? WHERE id='"+idc_rechercher+"';");
                query.addBindValue(nom_cli_co);query.exec();Testquery=true;
            }
            if(email_Client_co!="")
            {//email_Client_co=email_Client_co.toUpper();
                query.prepare("UPDATE commandes SET emailclient =? WHERE id='"+idc_rechercher+"';");
                query.addBindValue(email_Client_co);query.exec();Testquery=true;
            }

            if(id!=0)
             {
                query.prepare("UPDATE commandes SET id =? WHERE id='"+idc_rechercher+"';");
                query.addBindValue(id);query.exec();Testquery=true;
            }
        }


 return Testquery;
}
QString GestionCommandes::afficherSommeQuantite(QString chaine1)
{
    QSqlQuery query;
         query.prepare("SELECT SUM(quantité) FROM commandes where (nomclient like :NOMC)");

         query.bindValue(":NOMC", chaine1);
         int nombre=0;

            if(query.exec())
            {
                while (query.next())
                {
                    nombre=query.value(0).toInt();
                    qDebug()<<nombre;
                }
            }
            QString nombre1 = QString::number(nombre);
       return nombre1;






}
QString GestionCommandes::afficherSommedep(QString chaine1)
{
    QSqlQuery query;
         query.prepare("SELECT SUM(prix) FROM commandes where (nomclient like :NOMC)");

         query.bindValue(":NOMC", chaine1);
         int nombre=0;

            if(query.exec())
            {
                while (query.next())
                {
                    nombre=query.value(0).toInt();
                    qDebug()<<nombre;
                }
            }
            QString nombre1 = QString::number(nombre);
       return nombre1;






}
QString GestionCommandes::afficherCountdep(QString chaine1)
{
    QSqlQuery query;
         query.prepare("SELECT COUNT(nomclient) FROM commandes where (nomclient like :NOMC)");

         query.bindValue(":NOMC", chaine1);
         int nombre=0;

            if(query.exec())
            {
                while (query.next())
                {
                    nombre=query.value(0).toInt();
                    qDebug()<<nombre;
                }
            }
            QString nombre1 = QString::number(nombre);
       return nombre1;






}



