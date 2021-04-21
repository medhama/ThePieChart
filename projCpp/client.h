#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Client
{
    QString nom,prenom,adresse,email;
    int cin,nbr_point,num_telephone;


public:
    Client();
    Client(int,QString,QString,QString,QString,int,int);
    int Get_cin(){return cin;}
    QString Get_nom(){return nom;}
    QString Get_prenom(){return prenom;}
    QString Get_adresse(){return adresse;}
    QString Get_email(){return email;}
    int Get_nbrpt(){return nbr_point;}
    int Get_NumTelephone(){return num_telephone;}


    void Set_cin(int cin){this->cin=cin;}
    void Set_nom(QString nom){this->nom=nom;}
    void Set_prenom(QString prenom){this->prenom=prenom;}
    void Set_adresse(QString adresse){this->adresse=adresse;}
    void Set_email(QString email){this->email=email;}
    void Set_nbrpt(int nbr_point){this->nbr_point=nbr_point;}
    void Set_NumTelephone(int num_telephone){this->num_telephone=num_telephone;}

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherTriNomAsc();
    QSqlQueryModel * afficherTriNomDesc();
    QSqlQueryModel * afficherTriPrenomAsc();
    QSqlQueryModel * afficherTriPrenomDesc();
    QSqlQueryModel * afficherTriNbr_PointAsc();
    QSqlQueryModel * afficherTriNbr_PointDesc();
    bool supprimer(int);
    Client SelectModif(int);
    bool Modifer(int);
    QSqlQueryModel * rechercher(QString);
    void pdf(QString);
    void mailing();
    int NbPtWinner();


};

#endif // CLIENT_H
