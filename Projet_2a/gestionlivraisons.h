#ifndef GESTIONLIVRAISONS_H
#define GESTIONLIVRAISONS_H
#include <QSqlQueryModel>
#include <QDialog>
#include <QString>
#include <gestioncommandes.h>
#include "smtp.h"
#include <QAbstractSocket>
namespace Ui {
class GestionLivraisons;
}

class GestionLivraisons : public QDialog
{
    Q_OBJECT

public:
    explicit GestionLivraisons(QWidget *parent = nullptr);
    ~GestionLivraisons();
    GestionLivraisons(int,QString,QString,QString);
    GestionLivraisons SelectModif(int);
    int getid();
    QString getdate_liv();
    QString getadresse_liv();
    QString getnom_liv();
    void setid(int);
    void setdate_liv(QString);
    void setadresse_liv(QString);
    void setnom_liv(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficherLivreur(QString);
    bool supprimer(int);
    bool modifier_liv(QString);
    void pdf(QString);
    QString currDate();


private slots:
    void on_pb_ajouterliv_clicked();

    void on_pb_supprimer_liv_clicked();

    void on_pb_ajouterCom_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_Modifierliv_clicked();

    void on_pb_modifierCom_clicked();

    void on_pb_rechercher_liv_clicked();

    void on_pb_trie_co_clicked();

    void on_pb_date_co_clicked();

    void on_pb_pdf_liv_clicked();
    void sendMail(QString subject , QString msg){
            Smtp* smtp = new Smtp("visitunisia1@gmail.com","123456789.V","smtp.gmail.com", 465);
            connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
            smtp->sendMail("visitunisia1@gmail.com", "ahmed.fakhfakh2@esprit.tn" , subject,msg);}
    void mailSent(QString status)
    {
        if(status == "Message sent")
            QMessageBox::warning( 0, tr( "E-mail" ), tr( "Le courrier a été envoyé!\n\n" ) );
    }
    void on_pb_trie_co_2_clicked();

    void on_pb_date_co_2_clicked();

    void on_pb_Modifierliv_2_clicked();

    void on_pb_Modifierliv_3_clicked();

private:
    Ui::GestionLivraisons *ui;
    int id;
    QString date_liv, adresse_liv,nom_liv;

};

#endif // GESTIONLIVRAISONS_H
