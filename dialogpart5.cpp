#include "dialogpart5.h"
#include "ui_dialogpart5.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart5::dialogpart5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart5)
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

dialogpart5::~dialogpart5()
{
    delete ui;
}

void dialogpart5::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[0]=10;
        bndr[0]="Fulka Roti/ Chapati";
    }
    else if(arg1==0)
    {
        bndr[0]="\0";
        f[0]=0;
    }
}


void dialogpart5::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[1]=15;
        bndr[1]="Butter Chapati";
    }
    else if(arg1==0)
    {
        bndr[1]="\0";
        f[1]=0;
    }
}


void dialogpart5::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[2]=20;
        bndr[2]="Ranya Roti/ Lambi Roti";
    }
    else if(arg1==0)
    {
        bndr[2]="\0";
        f[2]=0;
    }
}


void dialogpart5::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[3]=110;
        bndr[3]="Steamed Rice";
    }
    else if(arg1==0)
    {
        bndr[3]="\0";
        f[3]=0;
    }
}


void dialogpart5::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[4]=160;
        bndr[4]="Veg Biryani";
    }
    else if(arg1==0)
    {
        bndr[4]="\0";
        f[4]=0;
    }
}


void dialogpart5::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[5]=120;
        bndr[5]="Zeera Rice";
    }
    else if(arg1==0)
    {
        bndr[5]="\0";
        f[5]=0;
    }
}


void dialogpart5::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[6]=139;
        bndr[6]="Garlic Rice/ Green Peas Pulao";
    }
    else if(arg1==0)
    {
        bndr[6]="\0";
        f[6]=0;
    }
}


void dialogpart5::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        f[7]=149;
        bndr[7]="Daal Khichadi/ Veg Pulao";
    }
    else if(arg1==0)
    {
        bndr[7]="\0";
        f[7]=0;
    }
}


void dialogpart5::on_pushButton_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<8;i++)
    {
        if(bndr[i]!="\0" && f[i]!=0)
        {
            l=l+1;
            sum=sum+f[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<f[i]<<endl;
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
          for(int i=0;i<8;i++)
          {
              if(bndr[i]!="\0")
              {
                  in<<" "<<"\n"<<bndr[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
}


void dialogpart5::on_pushButton_2_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}


void dialogpart5::on_pushButton_3_clicked()
{
    hide();
}

