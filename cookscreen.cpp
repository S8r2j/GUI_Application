#include "cookscreen.h"
#include "ui_cookscreen.h"
#include"dialogpart1.h"
#include"mainwindow.h"
#include"QFile"
#include"QMessageBox"
cookscreen::cookscreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cookscreen)
{
    ui->setupUi(this);

}

cookscreen::~cookscreen()
{
    delete ui;
}

void cookscreen::on_pushButton_clicked()
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

