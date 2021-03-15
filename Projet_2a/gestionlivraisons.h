#ifndef GESTIONLIVRAISONS_H
#define GESTIONLIVRAISONS_H
#include <QSqlQueryModel>
#include <QDialog>
#include <QString>

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
    bool supprimer(int);

private slots:
    void on_pb_ajouterliv_clicked();

    void on_pb_supprimer_liv_clicked();

    void on_pb_ajouterCom_clicked();

    void on_pb_supprimer_2_clicked();

private:
    Ui::GestionLivraisons *ui;
    int id;
    QString date_liv, adresse_liv,nom_liv;
};

#endif // GESTIONLIVRAISONS_H
