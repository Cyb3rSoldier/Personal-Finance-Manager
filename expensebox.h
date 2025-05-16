#ifndef EXPENSEBOX_H
#define EXPENSEBOX_H

#include <QDialog>

namespace Ui {
class ExpenseBox;
}

class ExpenseBox : public QDialog
{
    Q_OBJECT

public:
    explicit ExpenseBox(QWidget *parent = nullptr);
    ~ExpenseBox();

private:
    Ui::ExpenseBox *ui;
};

#endif // EXPENSEBOX_H
