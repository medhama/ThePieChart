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

private:
    Ui::ClientAff *ui;
    Client etmp;
    Produit etmp_prod;
};

#endif // CLIENTAFF_H
