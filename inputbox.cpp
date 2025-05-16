#include "inputbox.h"
#include "ui_inputbox.h"

InputBox::InputBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::InputBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&InputBox);
}

InputBox::~InputBox()
{
    delete ui;
}

//add button -->

void InputBox::incomeAdd()
{
    QString incomeType= ui->comboBox->text();
    QString date=ui->date1->calendar();
    QString amount= ui->lineEdit->text();
    emit getIncome(incomeType, amount);
}

