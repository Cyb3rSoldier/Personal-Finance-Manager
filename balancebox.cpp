#include "balancebox.h"
#include "ui_balancebox.h"

BalanceBox::BalanceBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BalanceBox)
{
    ui->setupUi(this);
}

BalanceBox::~BalanceBox()
{
    delete ui;
}
