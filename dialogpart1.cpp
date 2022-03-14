#include "dialogpart1.h"
#include "ui_dialogpart1.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart1::dialogpart1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart1)
{
    ui->setupUi(this);
    ui->comboBox->addItem("T1");
    ui->comboBox->addItem("T2");
    ui->comboBox->addItem("T3");
    ui->comboBox->addItem("T4");
    ui->comboBox->addItem("T5");
    ui->comboBox->addItem("T6");
    ui->comboBox->addItem("T7");
    ui->comboBox->addItem("T8");
    ui->comboBox->addItem("T9");
    ui->comboBox->addItem("T10");
    ui->comboBox->addItem("T11");
    ui->comboBox->addItem("T12");
    ui->comboBox->addItem("T13");
    ui->comboBox->addItem("T14");
    ui->comboBox->addItem("T15");
}

dialogpart1::~dialogpart1()
{
    delete ui;
}

void dialogpart1::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        s[0]="Veg Manchow Soup";
        a[0]=99;
    }
    else if(arg1==0)
    {
        s[0]="\0";
        a[0]=0;
    }
}


void dialogpart1::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        s[1]="Assorted Veg Pakoda";
        a[1]=99;
    }
    else if(arg1==0)
    {
        a[1]=0;
        s[1]="\0";
    }
}


void dialogpart1::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[2]=159;
        s[2]="Paneer Pakoda";
    }
    else if(arg1==0)
    {
        a[2]=0;
        s[2]="\0";
    }
}


void dialogpart1::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[3]=199;
        s[3]="Paneer Tikka";
    }
    else if(arg1==0)
    {
        a[3]=0;
        s[3]="\0";
    }
}


void dialogpart1::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[4]=130;
        s[4]="Harabhara Kabab";
    }
    else if(arg1==0)
    {
        a[4]=0;
        s[4]="\0";
    }
}


void dialogpart1::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[5]=69;
        s[5]="French Fries";
    }
    else if(arg1==0)
    {
        a[5]=0;
        s[5]="\0";
    }
}


void dialogpart1::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[6]=149;
        s[6]="Crispy Veg";
    }
    else if(arg1==0)
    {
        a[6]=0;
        s[6]="\0";
    }
}


void dialogpart1::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[7]=149;
        s[7]="Chilli Paneer";
    }
    else if(arg1==0)
    {
        a[7]=0;
        s[7]="\0";
    }
}


void dialogpart1::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        a[8]=149;
        s[8]="Veg Manchurian";
    }
    else if(arg1==0)
    {
        a[8]=0;
        s[8]="\0";
    }
}




void dialogpart1::on_pushButton_3_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<9;i++)
    {
        if(s[i]!="\0" && a[i]!=0)
        {
            l=l+1;
            sum=sum+a[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<a[i]<<endl;
        }
    }
    ofstream out("C:/Users/myide/Documents/SSSN/totalprice.txt");
    out<<sum<<endl;
    if(l==0)
    {
        QMessageBox::information(this,"Information","Please select an item to order");
    }
    else if(l!=0)
    {
        QMessageBox::StandardButton reply= QMessageBox::question(this,"Order Confirmation","Do you want to confirm your order?",QMessageBox::Yes|QMessageBox::No);
        if(reply==QMessageBox::Yes)
        {
          QFile file("C:/Users/myide/Documents/SSSN/vegstarter.txt");
          if(!file.open(QFile::WriteOnly|QFile::Text))
          {
              QMessageBox::information(this,"Information","Your order is not placed due to internal file not opening");
          }
          QTextStream out(&file);
          out<<ui->comboBox->currentText();
          ofstream in("C:/Users/myide/Documents/SSSN/vegstarter.txt");
          for(int i=0;i<9;i++)
          {
              if(s[i]!="\0")
              {
                  in<<" "<<"\n"<<s[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
 }


void dialogpart1::on_pushButton_2_clicked()
{
    hide();
}


void dialogpart1::on_pushButton_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}

