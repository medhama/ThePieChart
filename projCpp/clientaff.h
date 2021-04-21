#ifndef CLIENTAFF_H
#define CLIENTAFF_H

#include <QDialog>
#include<client.h>
#include<produit.h>
#include <QtMultimedia/QMediaPlayer>

namespace Ui {
class ClientAff;
}
class QMediaPlayer;
class ClientAff : public QDialog
{
    Q_OBJECT

public:
    explicit ClientAff(QWidget *parent = nullptr);
    ~ClientAff();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_Rechercher_Client_button_clicked();

    void on_SortButton_clicked();

    void on_SendMail_clicked();

    void on_CreatePDF_clicked();

    void on_CreateClientPdfFile_clicked();
    void mailSent(QString);
     void sendMail();

     void on_SelectModifProd_clicked();

     void on_SelectModifConfirm_clicked();

     void on_avrir_clicked();

     void on_pause_clicked();

     void on_stop_clicked();

     void on_mute_clicked();

     void on_Play_clicked();

     void on_volumen_valueChanged(int value);

     void on_Tab_client_clicked(const QModelIndex &index);

     void on_ClickSoundOnOff_clicked();

     void on_RechercherProduit_clicked();

     void on_ResetButton_clicked();

     void on_Tab_produit_clicked(const QModelIndex &index);

     void on_SortButton_2_clicked();



     void on_GenWinner_clicked();

private:
    Ui::ClientAff *ui;
    Client etmp;
    Produit etmp_prod;
    QMediaPlayer *mMediaPlayer;
    void playClick(int onoff){
        if (onoff==0)
        {
        QMediaPlayer *playerB = new QMediaPlayer;
        playerB->setMedia(QUrl::fromLocalFile("C:/Users/Hamadi/Desktop/C++/ThePieChart/projCpp/Music/click2.wav"));
        playerB->setVolume(50);
        playerB->play();
        }
    }
};

#endif // CLIENTAFF_H
