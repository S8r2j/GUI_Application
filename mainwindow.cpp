#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QPixmap"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap a(":/rec/img/Sulthans-special-Biryani.jpg");
//    int w=ui->label_3->width();
//    int l=ui->label_3->height();
//    ui->label_3->setPixmap(a.scaled(w,l,Qt::KeepAspectRatio));
//    QPixmap r(":/rec/img/5783153.jpg");
//    int m= ui->label_5->width();
//    int n= ui->label_5->height();
//    ui->label_5->setPixmap(r.scaled(m,n,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    vegstarter= new dialogpart1(this);
    vegstarter->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    nonvegstarter = new dialogpart2(this);
    nonvegstarter->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    vegmaincourse= new dialogpart3(this);
    vegmaincourse->show();
}


void MainWindow::on_pushButton_6_clicked()
{
    nonvegmaincourse = new dialogpart4(this);
    nonvegmaincourse->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    bandr = new dialogpart5(this);
    bandr->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    birya= new dialogpart6(this);
    birya->show();
}


