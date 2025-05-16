#include "expensebox.h"
#include "ui_expensebox.h"

ExpenseBox::ExpenseBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExpenseBox)
{
    ui->setupUi(this);
}

ExpenseBox::~ExpenseBox()
{
    delete ui;
}
