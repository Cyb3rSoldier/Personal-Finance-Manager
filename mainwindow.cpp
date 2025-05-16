#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,incomebox(new incomeBox(this))
{
    ui->setupUi(this);
    connect(ui->button1,&QPushButton::clicked,this,&MainWindow::incomeFunc);
    connect(incomebox,&incomeBox::getIncome,this,&MainWindow::ongetIncome);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete incomebox;
}

QStringList incomeList;
QStringList expenseList;
int balance=0;

//income button-->

void MainWindow::incomeFunc()
{
    incomebox->show();
}

void MainWindow::ongetIncome(const QString &t, const QString &a){
    int getAmount= a.toInt();
    total_income= total_income+getAmount;
}
