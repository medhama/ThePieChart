#ifndef GESTIONLIVRAISONS_H
#define GESTIONLIVRAISONS_H
#include <QSqlQueryModel>
#include <QDialog>
#include <QString>
#include <gestioncommandes.h>
#include "smtp.h"
#include <QAbstractSocket>
#include <QMediaPlayer>
#include <QFontDialog>
#include <QFont>
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
    QString  afficherNumdate(QString);
    bool supprimer(int);
    void Loadsettings();
    void Savesettings();
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
            smtp->sendMail("visitunisia1@gmail.com", "mohamedhamadifathallah@gmail.com" , subject,msg);}
    void mailSent(QString status)
    {
        if(status == "Message sent")
            QMessageBox::warning( 0, tr( "E-mail" ), tr( "Le courrier a été envoyé!\n\n" ) );
    }
    void on_pb_trie_co_2_clicked();

    void on_pb_date_co_2_clicked();

    void on_pb_Modifierliv_2_clicked();

    void on_pb_Modifierliv_3_clicked();

    void on_pb_Modifierliv_3_pressed();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_rechercher_liv_2_clicked();

    void on_pb_rechercher_liv_5_clicked();

    void on_pb_rechercher_liv_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::GestionLivraisons *ui;
    QMediaPlayer *musicClic=new QMediaPlayer;
    QMediaPlayer *musica=new QMediaPlayer;
    int id;
    QFont font;
    QString date_liv, adresse_liv,nom_liv;

};

#endif // GESTIONLIVRAISONS_H
