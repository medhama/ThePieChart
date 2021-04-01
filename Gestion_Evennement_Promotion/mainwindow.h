#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "evennement.h"
#include "promotion.h"
#include <QLabel>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_ajouterpro_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_modifier_event_clicked();

    void on_pb_modifier_promotion_clicked();

    void on_rechercher_event_textChanged(const QString &);

    void on_radioButton_nom_event_clicked();

    void on_radioButton_id_event_clicked();

    void on_radioButton_DateDebut_event_clicked();

    void on_radioButton_DateFin_event_clicked();

    void on_excel_clicked();

    void on_PDF_clicked();



    void on_insert_try_linkActivated(QLabel *label1);

private:
    Ui::MainWindow *ui;
    Evennement E;
    Promotion P;
};
#endif // MAINWINDOW_H
