#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "inputbox.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void incomeFunc();
    void ongetIncome(const QString &t, const QString &a);

private:
    Ui::MainWindow *ui;
    incomeBox *incomebox;
};
#endif // MAINWINDOW_H
