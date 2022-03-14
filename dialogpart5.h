#ifndef DIALOGPART5_H
#define DIALOGPART5_H
#include"iostream"
#include"cookscreen.h"
#include"billingpart.h"
#include <QDialog>
using namespace std;
namespace Ui {
class dialogpart5;
}

class dialogpart5 : public QDialog
{
    Q_OBJECT

public:
    explicit dialogpart5(QWidget *parent = nullptr);
    ~dialogpart5();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dialogpart5 *ui;
    string bndr[8];
    int f[8];
    cookscreen *c;
    billingpart *bill;
};

#endif // DIALOGPART5_H
