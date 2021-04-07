#ifndef EVENNEMENT_H
#define EVENNEMENT_H

#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include<QTableView>


class Evennement
{
public:
    Evennement();
    Evennement(int, QString, int, int);
    int getid();
    QString getNomEvent();
    int getDateDebut();
    int getDateFin();

    void setid(int);
    void setNomEvent(QString);
    void setDateDebut(int);
    void setDateFin(int);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int);

    bool  verif_nom(QString ch);
    bool verif_chaine(QString);
    bool verif_champs_vide_nom(QString );
    bool verif_champs_vide2(QString);
    void clear(QTableView *table);
   // void rechercher2(QTableView * table ,QString nom );
    //void rechercher2(QTableView * table ,int id, QString nom, int dated, int datef );

    QSqlQueryModel * afficher_tri_nom();
    QSqlQueryModel * afficher_tri_id();
    QSqlQueryModel * afficher_tri_date_debut();
    QSqlQueryModel * afficher_tri_date_fin();






private:
    int Id_event;
    QString Nom_event;
    int Date_debut;
    int Date_fin;


};

#endif // EVENNEMENT_H
