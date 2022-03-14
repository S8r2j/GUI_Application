#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialogpart1.h"
#include"dialogpart2.h"
#include"dialogpart3.h"
#include"dialogpart4.h"
#include"dialogpart5.h"
#include"dialogpart6.h"
#include"cookscreen.h"
#include"billingpart.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    dialogpart1 *vegstarter;
    dialogpart2 *nonvegstarter;
    dialogpart3 *vegmaincourse;
    dialogpart4 *nonvegmaincourse;
    dialogpart5 *bandr;
    dialogpart6 *birya;
    cookscreen *c;
    billingpart *bill;
};
#endif // MAINWINDOW_H
