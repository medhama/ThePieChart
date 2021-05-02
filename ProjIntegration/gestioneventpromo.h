#ifndef GESTIONEVENTPROMO_H
#define GESTIONEVENTPROMO_H

#include <QDialog>
#include <QMainWindow>
#include "evennement.h"
#include "promotion.h"
#include <QLabel>
#include <QPixmap>
#include "mailling.h"
#include <QSound>
#include "arduino.h"

namespace Ui {
class GestionEventPromo;
}

class GestionEventPromo : public QDialog
{
    Q_OBJECT

public:
    explicit GestionEventPromo(QWidget *parent = nullptr);
    ~GestionEventPromo();


private slots :
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_ajouterpro_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_modifier_event_clicked();

   // void on_pb_modifier_promotion_clicked();

    void on_rechercher_event_textChanged(const QString &);

    void on_radioButton_nom_event_clicked();

    void on_radioButton_id_event_clicked();

    void on_radioButton_DateDebut_event_clicked();

    void on_radioButton_DateFin_event_clicked();

    void on_excel_clicked();

    void on_PDF_clicked();

    void on_insert_try_linkActivated(QLabel *label1);

   // void on_sendBtn_clicked();

    void on_sendBtn_clicked();

    void on_InsertImage_clicked();

    void on_tab_promotion_activated(const QModelIndex &index);

    void on_pb_modifier_promotion_clicked();

    void on_tab_etudiant_activated(const QModelIndex &index);

    // calculator
   void digit_pressed();
    void on_pushButton_decimal_released();
    void unary_operation_pressed();
    void on_pushButton_clear_released();
    void on_pushButton_equals_released();
    void binary_operation_pressed();

    //Arduino
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino

    void on_rechercher_promo_textChanged(const QString &arg1);

    //Timer
    void UpdateTime();


private:
    Ui::GestionEventPromo *ui;
    Evennement E;
    Promotion P;
    QString parsed_data; //variable contenant les données reçues
        Arduino A; //object temporaire
        int alertt;

    //Timer
        QTimer * timer_1s;

    //Mail
    void sendMail();
    void mailSent(QString);

    //Sounds
    QSound* son;
    QSound* erreur;
    QSound* succes;
};

#endif // GESTIONEVENTPROMO_H
