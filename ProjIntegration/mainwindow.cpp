#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientaff.h"
#include "gestions.h"
#include "gestionlivraisons.h"
#include "gestioneventpromo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // qDebug()<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Clientproduit_clicked()
{
    ClientAff d;
    d.exec();


}

void MainWindow::on_Clientproduit_2_clicked()
{
    ClientAff d;
    d.close();
}

void MainWindow::on_GestionStock_clicked()
{
    gestions G;
    G.exec();

}

void MainWindow::on_LivraisonCommande_clicked()
{
    GestionLivraisons F;
    F.exec();
}



void MainWindow::on_PromotionEvenement_clicked()
{
    GestionEventPromo FG;
    FG.exec();

}
