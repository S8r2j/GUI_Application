#ifndef DIALOGPART2_H
#define DIALOGPART2_H
#include"iostream"
#include <QDialog>
#include"cookscreen.h"
#include"billingpart.h"
using namespace std;
namespace Ui {
class dialogpart2;
}

class dialogpart2 : public QDialog
{
    Q_OBJECT

public:
    explicit dialogpart2(QWidget *parent = nullptr);
    ~dialogpart2();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_checkBox_15_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::dialogpart2 *ui;
    string nonvegstar[10];
    int b[10];
    cookscreen *c;
    billingpart *bill;
};

#endif // DIALOGPART2_H
