#ifndef GESTIONS_H
#define GESTIONS_H

#include <QDialog>
#include <fournisseur.h>
#include <stock.h>

namespace Ui {
class gestions;
}

class gestions : public QDialog
{
    Q_OBJECT

public:
    explicit gestions(QWidget *parent = nullptr);
    ~gestions();

private slots:
   // void on_pushButton_clicked();

    void on_pb_supprimerf_clicked();

    void makePolt();

    void on_pb_ajouterf_clicked();

    void on_pb_ajouters_clicked();

    void on_pb_supprimers_clicked();

    void on_tab_fournisseur_2_activated(const QModelIndex &index);

    void on_tab_stock_2_activated(const QModelIndex &index);



    void on_pbmodifierstock_clicked();

    void on_pbmodifierfournisseur_2_clicked();

    void on_lineEdit_num_4_textChanged(const QString &arg1);

    void on_pushButton_date_diifrence_clicked();
    void sendMail_Produit_Date();
    void mailSent(QString status);


    void on_pushButton_total_clicked();

    void on_recherchestock_textChanged(const QString &arg1);

    void on_imp_clicked();

private:
    Ui::gestions *ui;
    FOURNISSEUR F;
    STOCK S;



};

#endif // GESTIONS_H
