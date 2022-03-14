#ifndef DIALOGPART4_H
#define DIALOGPART4_H
#include"iostream"
#include"cookscreen.h"
#include"billingpart.h"
#include <QDialog>
using namespace std;
namespace Ui {
class dialogpart4;
}

class dialogpart4 : public QDialog
{
    Q_OBJECT

public:
    explicit dialogpart4(QWidget *parent = nullptr);
    ~dialogpart4();

private slots:
    void on_checkBox_70_stateChanged(int arg1);

    void on_checkBox_71_stateChanged(int arg1);

    void on_checkBox_72_stateChanged(int arg1);

    void on_checkBox_79_stateChanged(int arg1);

    void on_checkBox_80_stateChanged(int arg1);

    void on_checkBox_81_stateChanged(int arg1);

    void on_checkBox_67_stateChanged(int arg1);

    void on_checkBox_68_stateChanged(int arg1);

    void on_checkBox_69_stateChanged(int arg1);

    void on_checkBox_64_stateChanged(int arg1);

    void on_checkBox_65_stateChanged(int arg1);

    void on_checkBox_66_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_20_stateChanged(int arg1);

    void on_checkBox_21_stateChanged(int arg1);

    void on_checkBox_34_stateChanged(int arg1);

    void on_checkBox_35_stateChanged(int arg1);

    void on_checkBox_36_stateChanged(int arg1);

    void on_checkBox_22_stateChanged(int arg1);

    void on_checkBox_23_stateChanged(int arg1);

    void on_checkBox_24_stateChanged(int arg1);

    void on_checkBox_25_stateChanged(int arg1);

    void on_checkBox_26_stateChanged(int arg1);

    void on_checkBox_27_stateChanged(int arg1);

    void on_checkBox_40_stateChanged(int arg1);

    void on_checkBox_41_stateChanged(int arg1);

    void on_checkBox_42_stateChanged(int arg1);

    void on_checkBox_28_stateChanged(int arg1);

    void on_checkBox_29_stateChanged(int arg1);

    void on_checkBox_30_stateChanged(int arg1);

    void on_checkBox_37_stateChanged(int arg1);

    void on_checkBox_38_stateChanged(int arg1);

    void on_checkBox_39_stateChanged(int arg1);

    void on_checkBox_31_stateChanged(int arg1);

    void on_checkBox_32_stateChanged(int arg1);

    void on_checkBox_33_stateChanged(int arg1);

    void on_checkBox_43_stateChanged(int arg1);

    void on_checkBox_44_stateChanged(int arg1);

    void on_checkBox_45_stateChanged(int arg1);

    void on_checkBox_46_stateChanged(int arg1);

    void on_checkBox_47_stateChanged(int arg1);

    void on_checkBox_48_stateChanged(int arg1);

    void on_checkBox_49_stateChanged(int arg1);

    void on_checkBox_52_stateChanged(int arg1);

    void on_checkBox_55_stateChanged(int arg1);

    void on_checkBox_58_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dialogpart4 *ui;
    string nonvegmaicour[46];
    int e[46];
    cookscreen *c;
    billingpart *bill;
};

#endif // DIALOGPART4_H
