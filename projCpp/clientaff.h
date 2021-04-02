#ifndef CLIENTAFF_H
#define CLIENTAFF_H

#include <QDialog>
#include<client.h>
#include<produit.h>

namespace Ui {
class ClientAff;
}

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

private:
    Ui::ClientAff *ui;
    Client etmp;
    Produit etmp_prod;
};

#endif // CLIENTAFF_H
