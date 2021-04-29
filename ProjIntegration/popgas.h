#ifndef POPGAS_H
#define POPGAS_H

#include <QDialog>

namespace Ui {
class PopGas;
}

class PopGas : public QDialog
{
    Q_OBJECT

public:
    explicit PopGas(QWidget *parent = nullptr);
    ~PopGas();

private:
    Ui::PopGas *ui;
};

#endif // POPGAS_H
