#ifndef INPUTBOX_H
#define INPUTBOX_H

#include <QDialog>

namespace Ui {
class InputBox;
}

class InputBox : public QDialog
{
    Q_OBJECT
    signals:
    void getIncome(const QString &t, const QString &a);


public:
    explicit InputBox(QWidget *parent = nullptr);
    ~InputBox();

private slots:
    void incomeAdd();

private:
    Ui::InputBox *ui;
};

#endif // INPUTBOX_H
