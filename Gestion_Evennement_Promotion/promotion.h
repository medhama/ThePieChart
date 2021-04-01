#ifndef PROMOTION_H
#define PROMOTION_H

#include <QString>
#include <QSqlQueryModel>


class Promotion
{
public:
    Promotion();
    Promotion(int,int,int,QString,QString,int);
    int getid();
  int getPrixInitial();
      int getPrixFinal();
   QString getDateDebut();
   QString getDateFin();
    int getPourcentage();


    void setid(int);
    void setPrixInitial(int);
    void setPrixFinal(int);
    void setDateDebut(QString);
    void setDateFin(QString);
    void setPourcentage(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int);


    bool  verif(QString ch);
    bool verif_chaine(QString);
    bool verif_champs_vide1(QString );
    bool verif_champs_vide2(QString);

private:
    int id;
   int Prix_initial;
    int Prix_final;
   QString Date_Debut;
   QString Date_Fin;
    int Pourcentage;
};

#endif // PROMOTION_H
