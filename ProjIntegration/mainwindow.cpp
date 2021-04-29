#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientaff.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug()<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
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
