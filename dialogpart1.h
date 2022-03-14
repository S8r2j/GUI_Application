#ifndef DIALOGPART1_H
#define DIALOGPART1_H
#include"iostream"
#include <QDialog>
#include"cookscreen.h"
#include"billingpart.h"
using namespace std;
namespace Ui {
class dialogpart1;
}

class dialogpart1 : public QDialog
{
    Q_OBJECT

public:
    explicit dialogpart1(QWidget *parent = nullptr);
    ~dialogpart1();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    string s[9];
    Ui::dialogpart1 *ui;
    cookscreen *c;
    billingpart *bill;
    int a[9];
};

#endif // DIALOGPART1_H
