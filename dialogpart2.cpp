#include "dialogpart2.h"
#include "ui_dialogpart2.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart2::dialogpart2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart2)
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

dialogpart2::~dialogpart2()
{
    delete ui;
}

void dialogpart2::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[0]=179;
        nonvegstar[0]="Chicken Manchurian";
    }
    else if(arg1==0)
    {
        b[0]=0;
        nonvegstar[0]="\0";
    }
}


void dialogpart2::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[1]=179;
        nonvegstar[1]="Chilli Chicken";
    }
    else if(arg1==0)
    {
        b[1]=0;
        nonvegstar[1]="\0";
    }
}


void dialogpart2::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[2]=179;
        nonvegstar[2]="Chicken 65";
    }
    else if(arg1==0)
    {
        b[2]=0;
        nonvegstar[2]="\0";
    }
}


void dialogpart2::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[3]=249;
        nonvegstar[3]="Chicken Tikka";
    }
    else if(arg1==0)
    {
        b[3]=0;
        nonvegstar[3]="\0";
    }
}


void dialogpart2::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[4]=199;
        nonvegstar[4]="Garlic Chicken Tikka";
    }
    else if(arg1==0)
    {
        b[4]=0;
        nonvegstar[4]="\0";
    }
}


void dialogpart2::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[5]=199;
        nonvegstar[5]="Black Pepper Chicken";
    }
    else if(arg1==0)
    {
        b[5]=0;
        nonvegstar[5]="\0";
    }
}


void dialogpart2::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[6]=179;
        nonvegstar[6]="Bhuna Chicken";
    }
    else if(arg1==0)
    {
        b[6]=0;
        nonvegstar[6]="\0";
    }
}


void dialogpart2::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[7]=239;
        nonvegstar[7]="Bhuna Mutton";
    }
    else if(arg1==0)
    {
        b[7]=0;
        nonvegstar[7]="\0";
    }
}


void dialogpart2::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[8]=111;
        nonvegstar[8]="Egg Pakoda";
    }
    else if(arg1==0)
    {
        b[8]=0;
        nonvegstar[8]="\0";
    }
}


void dialogpart2::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        b[9]=59;
        nonvegstar[9]="Egg Omlet";
    }
    else if(arg1==0)
    {
        b[9]=0;
        nonvegstar[9]="\0";
    }
}


void dialogpart2::on_pushButton_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<10;i++)
    {
        if(nonvegstar[i]!="\0" && b[i]!=0)
        {
            l=l+1;
            sum=sum+b[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<b[i]<<endl;
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
          for(int i=0;i<10;i++)
          {
              if(nonvegstar[i]!="\0")
              {
                  in<<" "<<"\n"<<nonvegstar[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
}


void dialogpart2::on_pushButton_4_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}


void dialogpart2::on_pushButton_5_clicked()
{
    hide();
}

