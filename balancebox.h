#ifndef BALANCEBOX_H
#define BALANCEBOX_H

#include <QDialog>

namespace Ui {
class BalanceBox;
}

class BalanceBox : public QDialog
{
    Q_OBJECT

public:
    explicit BalanceBox(QWidget *parent = nullptr);
    ~BalanceBox();

private:
    Ui::BalanceBox *ui;
};

#endif // BALANCEBOX_H
