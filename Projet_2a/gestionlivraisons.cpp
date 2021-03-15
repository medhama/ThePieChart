#include "gestionlivraisons.h"
#include "gestioncommandes.h"
#include "ui_gestionlivraisons.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
GestionLivraisons::GestionLivraisons(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::GestionLivraisons)
{   GestionLivraisons A(id,date_liv,adresse_liv,nom_liv);
    GestionCommandes r;
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(100, 999, this));
    ui->tab_Livraisons->setModel(A.afficher());
    ui->tab_Commandes->setModel(r.afficher());

}

GestionLivraisons::~GestionLivraisons()
{
    delete ui;
}


GestionLivraisons::GestionLivraisons(int id,QString date_liv,QString adresse_liv,QString nom_liv)
{this->id=id; this->date_liv=date_liv; this->adresse_liv=adresse_liv;this->nom_liv=nom_liv;}
int GestionLivraisons::getid(){return id;}
QString GestionLivraisons::getdate_liv(){return  date_liv;}
QString GestionLivraisons::getadresse_liv(){return adresse_liv;}
QString GestionLivraisons::getnom_liv(){return nom_liv;}
void GestionLivraisons::setid(int id){this->id=id;}
void GestionLivraisons::setdate_liv(QString date_liv){this->date_liv=date_liv;}
void GestionLivraisons::setadresse_liv(QString adresse_liv){this->adresse_liv=adresse_liv;}
void GestionLivraisons::setnom_liv(QString nom_liv){this->nom_liv=nom_liv;}
bool GestionLivraisons::ajouter()
{

    QSqlQuery query;
  QString id_string= QString::number(id);
         query.prepare("INSERT INTO livraisons (id, datedelalivraison, adresse,nomlivreur) "
                       "VALUES (:id, :date, :ad, :name)");
         query.bindValue(":id",id_string);
         query.bindValue(":date", date_liv);
         query.bindValue(":ad", adresse_liv);
         query.bindValue(":name", nom_liv);
        return query.exec();

}
bool GestionLivraisons::supprimer(int id)
{
    QSqlQuery query;
         query.prepare(" Delete from livraisons where id=:id");
         query.bindValue(0, id);

        return query.exec();


}
QSqlQueryModel* GestionLivraisons::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM livraisons");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("date"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom_liv"));


  return  model;
}

void GestionLivraisons::on_pb_ajouterliv_clicked()
{int id=ui->le_id->text().toInt();
    QString date_liv=ui->la_Dateliv->text();
    QString adresse_liv=ui->la_adresseliv->text();
    QString nom_liv=ui->le_nomLiv->text();
 GestionLivraisons L(id,date_liv,adresse_liv,nom_liv);
 bool test=L.ajouter();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     ui->tab_Livraisons->setModel(L.afficher());
 }
 else
     msgBox.setText("Echec d'ajout");
   //  msgBox.exec();

}

void GestionLivraisons::on_pb_supprimer_liv_clicked()
{
    GestionLivraisons E1; E1.setid(ui->le_id_supp_liv->text().toInt());
    bool test=E1.supprimer(E1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_Livraisons->setModel(E1.afficher());

    }
    else
        msgBox.setText("Echec de suppression");
       // msgBox.exec();
}

void GestionLivraisons::on_pb_ajouterCom_clicked()
{   int id=ui->le_id_2->text().toInt();
    int prix_co=ui->le_qte_com->text().toInt();
    int Quantite_co=ui->le_prix_Com->text().toInt();
    QString nom_cli_co=ui->le_Nom_Co->text();
    QString email_Client_co=ui->le_Email_CO->text();
 GestionCommandes C(id,prix_co,Quantite_co,nom_cli_co,email_Client_co);
 bool test=C.ajouter();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     ui->tab_Commandes->setModel(C.afficher());
 }
 else
     msgBox.setText("Echec d'ajout");
   //  msgBox.exec();

}

void GestionLivraisons::on_pb_supprimer_2_clicked()
{
    GestionCommandes C1; C1.setid(ui->le_id_supp_co->text().toInt());
    bool test=C1.supprimer(C1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
    ui->tab_Commandes->setModel(C1.afficher());

    }
    else
        msgBox.setText("Echec de suppression");
       // msgBox.exec();
}
