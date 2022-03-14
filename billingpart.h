#ifndef BILLINGPART_H
#define BILLINGPART_H

#include <QDialog>

namespace Ui {
class billingpart;
}

class billingpart : public QDialog
{
    Q_OBJECT

public:
    explicit billingpart(QWidget *parent = nullptr);
    ~billingpart();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::billingpart *ui;
};

#endif // BILLINGPART_H
