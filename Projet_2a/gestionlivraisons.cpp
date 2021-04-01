#include "gestionlivraisons.h"
#include "gestioncommandes.h"
#include "ui_gestionlivraisons.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QMessageBox>
#include <QApplication>
#include <QtCore>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include "smtp.h"
#include <QAbstractSocket>
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


bool GestionLivraisons::modifier_liv(QString id_rechercher)
{   QSqlQuery query;
    bool Testquery=false;
    QSqlQuery qry;
    qry.prepare("SELECT id FROM livraisons where id=?;");
    qry.addBindValue(id_rechercher);
    bool exist=false;
    if(qry.exec())
        if(qry.next())
            {
            QVariant ch=qry.value(0);
            QString verif = QVariant(ch).toString();
            qDebug()<<verif;
            if(verif==id_rechercher)
                exist=true;
             }
    if(exist)
       {
            if(date_liv!="")
            {   date_liv=date_liv.toUpper();
                query.prepare("UPDATE livraisons SET datedelalivraison =? WHERE id='"+id_rechercher+"';");
                query.addBindValue(date_liv);query.exec();Testquery=true;

            }
            if(adresse_liv!="")
            {
                adresse_liv=adresse_liv.toUpper();
                query.prepare("UPDATE livraisons SET adresse =? WHERE id='"+id_rechercher+"';");
                query.addBindValue(adresse_liv);query.exec();Testquery=true;
            }
            if(nom_liv!="")
            {
                query.prepare("UPDATE livraisons SET nomlivreur =? WHERE id='"+id_rechercher+"';");
                query.addBindValue(nom_liv);query.exec();Testquery=true;
            }

            if(id!=0)
             {
                query.prepare("UPDATE livraisons SET id =? WHERE id='"+id_rechercher+"';");
                query.addBindValue(id);query.exec();Testquery=true;
            }
        }


 return Testquery;
}



QSqlQueryModel* GestionLivraisons::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM livraisons ORDER BY id");
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
 ui->le_id->clear();
 ui->la_Dateliv->clear();
 ui->la_adresseliv->clear();
 ui->le_nomLiv->clear();
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
 ui->le_id_2->clear();
 ui->le_qte_com->clear();
 ui->le_prix_Com->clear();
 ui->le_Nom_Co->clear();
 ui->le_Email_CO->clear();

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     ui->tab_Commandes->setModel(C.afficher());
     QString name=ui->le_Nom_Co->text().toUpper();
     QString chaine;
     chaine=name;
     chaine=chaine+"\n Thanks For Trusting us Your Order Will be delivered Soon'";


     chaine=chaine+"'\nCette Message est automatique merci de ne Répondre";
     qDebug() <<chaine;
     sendMail("Thank you for your gift purchase!",chaine);


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

void GestionLivraisons::on_pb_Modifierliv_clicked()
{
    bool test=true;

ui->modifier_liv_id_chercher->setEnabled(true);
    QString id_recherche=ui->modifier_liv_id_chercher->text();
     /*if(id_recherche!= "" && id_recherche.length()==2)
         test=true;
     else

         QMessageBox::information(nullptr,QObject::tr("ALERT"),QObject::tr("Le ID est obligatoire.\n2 caractères"),QMessageBox::Ok);*/

    if(test)
      {int id = ui->modifier_liv_id_chercher->text().toInt();
                  QString date_liv=ui->la_Dateliv_Mo->text(),
                          adresse_liv=ui->la_adresseliv_Mo->text(),
                          nom_liv=ui->le_nomLiv_Mo->text();

                          GestionLivraisons e1(id,date_liv,adresse_liv,nom_liv);
                          bool test_modifier=e1.modifier_liv(id_recherche);

                          if(test_modifier)
                             {qDebug()<<"Modification Terminer";
                              ui->la_Dateliv_Mo->clear();
                              ui->la_adresseliv_Mo->clear();
                              ui->le_nomLiv_Mo->clear();

                             //QMessageBox::information(nullptr,QObject::tr("Modification d'une livraison"),QObject::tr("Terminer avec Succès.\n"),QMessageBox::Ok);
                             ui->tab_Livraisons->setModel(e1.afficher());
                              }
}}

void GestionLivraisons::on_pb_modifierCom_clicked()
{
    bool test=true;

ui->le_id_3->setEnabled(true);
    QString idc_recherche=ui->le_id_3->text();
     /*if(id_recherche!= "" && id_recherche.length()==2)
         test=true;
     else

         QMessageBox::information(nullptr,QObject::tr("ALERT"),QObject::tr("Le ID est obligatoire.\n2 caractères"),QMessageBox::Ok);*/

    if(test)
      {           int id = ui->le_id_3->text().toInt(),
                   prix_co=ui->le_prix_Com_2->text().toInt(),
                   Quantite_co=ui->le_qte_com_2->text().toInt();
                  QString nom_cli_co=ui->le_Nom_Co_2->text(),
                  email_Client_co=ui->le_Email_CO_2->text();


                          GestionCommandes C2(id,prix_co,Quantite_co,nom_cli_co,email_Client_co);
                          bool test_modifier=C2.modifier_com(idc_recherche);

                          if(test_modifier)
                             {qDebug()<<"Modification Terminer";
                              ui->le_prix_Com_2->clear();
                              ui->le_qte_com_2->clear();
                              ui->le_Nom_Co_2->clear();
                              ui->le_Email_CO_2->clear();

                              //QMessageBox::information(nullptr,QObject::tr("Modification d'une Commande"),QObject::tr("Terminer avec Succès.\n"),QMessageBox::Ok);
                              ui->tab_Commandes->setModel(C2.afficher());
                              }
}


}

void GestionLivraisons::on_pb_rechercher_liv_clicked()
{ GestionLivraisons A1;
    QString Chaine= ui->le_id_rech_liv1->text();
    qDebug()<<Chaine;
    ui->tab_Livraisons->setModel(A1.afficherLivreur(Chaine));
}
QSqlQueryModel * GestionLivraisons::afficherLivreur(QString chaine)
{
    QSqlQuery query;
         query.prepare("SELECT * FROM livraisons where ((Adresse like :NOMC) or (id like :NOMC) or (datedelalivraison like :NOMC) or "
            "(nomlivreur like :NOMC) )");
         query.bindValue(":NOMC", chaine);
         query.exec();

        QSqlQueryModel * model= new QSqlQueryModel();
            // model.bindValue(":nomproduit", mot);
            //model->setFilterRegExp(QRegExp(mot, Qt::CaseInsensitive,QRegExp::FixedString));

             model->setQuery(query);
            // qDebug()<<"connection recherche";





   /*QSqlQueryModel * model= new QSqlQueryModel();

            model->setQuery("SELECT* FROM livraisons where Adresse='"+chaine+"' OR id='"+chaine+"' OR datedelalivraison ='"+chaine+"' OR (nomlivreur like "+chaine+"')  ;");*/
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("date"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("adresse"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom_liv"));
       return model;






}


void GestionLivraisons::on_pb_trie_co_clicked()
{GestionCommandes r;
ui->tab_Commandes->setModel(r.afficherTrieasc());



}

void GestionLivraisons::on_pb_date_co_clicked()
{
    GestionCommandes r;
    ui->tab_Commandes->setModel(r.afficherTriedesc());
}

void GestionLivraisons::on_pb_pdf_liv_clicked()
{
   pdf("test.pdf");
QMessageBox::information(nullptr,QObject::tr("Creation d'un fichier PDF"),QObject::tr("Terminer avec Succès.\n"),QMessageBox::Ok);

}
void GestionLivraisons::pdf(QString filename){
    QPdfWriter writer(filename);
        writer.setPageSize(QPagedPaintDevice::A4);
        writer.setPageMargins(QMargins(30, 30, 30, 30));

        QPainter painter(&writer);
        painter.setPen(Qt::black);
        painter.setFont(QFont("Times", 10));

        QRect r = painter.viewport();

        QString citydate = "Tunis, ";
        citydate += currDate();

        painter.drawText(r, Qt::AlignRight, citydate);


    QString sender = "The Pie Chart XYZ\n";


    painter.drawText(r, Qt::AlignLeft, sender);
        painter.end();
}
QString GestionLivraisons::currDate()
{
    QDate date = QDate::currentDate();
    return date.toString("dd.MM.yyyy");
}


void GestionLivraisons::on_pb_trie_co_2_clicked()
{GestionCommandes r;
    ui->tab_Commandes->setModel(r.afficherTriedesc1());

}

void GestionLivraisons::on_pb_date_co_2_clicked()
{
    GestionCommandes r;
    ui->tab_Commandes->setModel(r.afficherTrieasc());
}

void GestionLivraisons::on_pb_Modifierliv_2_clicked()
{

 int cin=ui->modifier_liv_id_chercher->text().toInt();
ui->modifier_liv_id_chercher->setEnabled(false);
   // qDebug()<<id;
//C=C.SelectModif(cin);
    //ui->pushButton->setEnabled(false);
    //ui->LE_cin->setEnabled(false);
    //C=C.SelectModif(cin);
    //ui->pushButton_6->setEnabled(true);
    QSqlQuery query;
    QString res=QString::number(cin);
    query.prepare("Select * from livraisons where id=:cin");
    query.bindValue(":cin",res);
    query.exec();
    query.next();
    int id1=query.value(0).toInt();
    QString date_liv1=query.value(1).toString();
    QString adresse_liv1=query.value(2).toString();
    QString nom_liv1=query.value(3).toString();
GestionLivraisons C(id1,date_liv1,adresse_liv1,nom_liv1);
    if(C.getid()!=0)
    {




   ui->la_Dateliv_Mo->setText(QString(C.getdate_liv()));
   ui->la_adresseliv_Mo->setText(QString(C.getadresse_liv()));
   ui->le_nomLiv_Mo->setText(QString(C.getnom_liv()));







}

}



void GestionLivraisons::on_pb_Modifierliv_3_clicked()
{
    int cin=ui->le_id_3->text().toInt();


       //ui->pushButton->setEnabled(false);
       ui->le_id_3->setEnabled(false);

       //ui->pushButton_6->setEnabled(true);
       QSqlQuery query;
       QString res=QString::number(cin);
       query.prepare("Select * from commandes where id=:cin");
       query.bindValue(":cin",res);
       query.exec();
       query.next();
       int id1=query.value(0).toInt();
       int id2=query.value(1).toInt();
       int id3=query.value(2).toInt();
       QString date_liv1=query.value(3).toString();
       QString adresse_liv1=query.value(4).toString();

   GestionCommandes C(id1,id2,id3,date_liv1,adresse_liv1);
       if(C.getid()!=0)
       {




      ui->le_qte_com_2->setText(QString::number(C.getQuantite_co()));
      ui->le_prix_Com_2->setText(QString::number(C.getprix_co()));
      ui->le_Nom_Co_2->setText(QString(C.getnom_cli_co()));
      ui->le_Email_CO_2->setText(QString(C.getemail_Client_co()));


}}
