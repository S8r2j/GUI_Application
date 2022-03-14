#include "billingpart.h"
#include "ui_billingpart.h"
#include"QMessageBox"
#include"QFile"
billingpart::billingpart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::billingpart)
{
    ui->setupUi(this);
}

billingpart::~billingpart()
{
    delete ui;
}

void billingpart::on_pushButton_clicked()
{
    QFile file("C:/Users/myide/Documents/SSSN/vegstarter.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::information(this,"Information","File is not opened");
    }
    QTextStream out(&file);
    QString text= out.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}


void billingpart::on_pushButton_2_clicked()
{
    QFile file("C:/Users/myide/Documents/SSSN/vegstarter.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::information(this,"Information","File is not opened");
    }
    QTextStream out(&file);
    QString text= out.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
    QFile file1("C:/Users/myide/Documents/SSSN/billings.txt");
    if(!file1.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::information(this,"Information","File is not opened");
    }
    QTextStream ou(&file1);
    QString tex= ou.readAll();
    ui->plainTextEdit_2->setPlainText(tex);
    file.close();
    QFile file2("C:/Users/myide/Documents/SSSN/totalprice.txt");
    if(!file2.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::information(this,"Information","File is not opened");
    }
    QTextStream o(&file2);
    QString te= o.readAll();
    ui->plainTextEdit_3->setPlainText("Rs."+te);
    file.close();
}


void billingpart::on_pushButton_3_clicked()
{
    QFile file("C:/Users/myide/Documents/SSSN/vegstarter.txt");
    file.open(QFile::WriteOnly|QFile::Truncate);
    file.close();
    QFile file1("C:/Users/myide/Documents/SSSN/billings.txt");
    file1.open(QFile::WriteOnly|QFile::Truncate);
    file1.close();
    QFile file2("C:/Users/myide/Documents/SSSN/totalprice.txt");
    file2.open(QFile::WriteOnly|QFile::Truncate);
    file2.close();
    hide();
}

