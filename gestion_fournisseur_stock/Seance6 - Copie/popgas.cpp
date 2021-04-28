#include "popgas.h"
#include "ui_popgas.h"

PopGas::PopGas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PopGas)
{
    ui->setupUi(this);
}

PopGas::~PopGas()
{
    delete ui;
}
