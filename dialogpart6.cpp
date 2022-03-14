#include "dialogpart6.h"
#include "ui_dialogpart6.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart6::dialogpart6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart6)
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

dialogpart6::~dialogpart6()
{
    delete ui;
}

void dialogpart6::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[0]=149;
        biryan[0]="Chicken Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[0]=0;
        biryan[0]="\0";
    }
}


void dialogpart6::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[1]=199;
        biryan[1]="Chicken Biryani : Half";
    }
    else if(arg1==0)
    {
        g[1]=0;
        biryan[1]="\0";
    }
}


void dialogpart6::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[2]=349;
        biryan[2]="Chicken Biryani : Full";
    }
    else if(arg1==0)
    {
        g[2]=0;
        biryan[2]="\0";
    }
}


void dialogpart6::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[3]=159;
        biryan[3]="Chicken Akhni Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[3]=0;
        biryan[3]="\0";
    }
}


void dialogpart6::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[4]=222;
        biryan[4]="Chicken Akhni Biryani : Half";
    }
    else if(arg1==0)
    {
        g[4]=0;
        biryan[4]="\0";
    }
}


void dialogpart6::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[5]=379;
        biryan[5]="Chicken Akhni Biryani : Full";
    }
    else if(arg1==0)
    {
        g[5]=0;
        biryan[5]="\0";
    }
}


void dialogpart6::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[6]=159;
        biryan[6]="Chicken Dum Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[6]=0;
        biryan[6]="\0";
    }
}


void dialogpart6::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[7]=222;
        biryan[7]="Chicken Dum Biryani : Half";
    }
    else if(arg1==0)
    {
        g[7]=0;
        biryan[7]="\0";
    }
}


void dialogpart6::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[8]=379;
        biryan[8]="Chicken Dum Biryani : Full";
    }
    else if(arg1==0)
    {
        g[8]=0;
        biryan[8]="\0";
    }
}


void dialogpart6::on_checkBox_19_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[9]=179;
        biryan[9]="Mutton Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[9]=0;
        biryan[9]="\0";
    }
}


void dialogpart6::on_checkBox_20_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[10]=229;
        biryan[10]="Mutton Biryani : Half";
    }
    else if(arg1==0)
    {
        g[10]=0;
        biryan[10]="\0";
    }
}


void dialogpart6::on_checkBox_21_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[11]=549;
        biryan[11]="Mutton Biryani : Full";
    }
    else if(arg1==0)
    {
        g[11]=0;
        biryan[11]="\0";
    }
}


void dialogpart6::on_checkBox_22_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[12]=199;
        biryan[12]="Mutton Akhni Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[12]=0;
        biryan[12]="\0";
    }
}


void dialogpart6::on_checkBox_23_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[13]=249;
        biryan[13]="Mutton Akhni Biryani : Half";
    }
    else if(arg1==0)
    {
        g[13]=0;
        biryan[13]="\0";
    }
}


void dialogpart6::on_checkBox_24_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[14]=599;
        biryan[14]="Mutton Akhni Biryani : Full";
    }
    else if(arg1==0)
    {
        g[14]=0;
        biryan[14]="\0";
    }
}


void dialogpart6::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[15]=199;
        biryan[15]="Mutton Dum Biryani : Portion";
    }
    else if(arg1==0)
    {
        g[15]=0;
        biryan[15]="\0";
    }
}


void dialogpart6::on_checkBox_17_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[16]=249;
        biryan[16]="Mutton Dum Biryani : Half";
    }
    else if(arg1==0)
    {
        g[16]=0;
        biryan[16]="\0";
    }
}


void dialogpart6::on_checkBox_18_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[17]=599;
        biryan[17]="Mutton Dum Biryani : Full";
    }
    else if(arg1==0)
    {
        g[17]=0;
        biryan[17]="\0";
    }
}


void dialogpart6::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[18]=169;
        biryan[18]="Egg Biryani";
    }
    else if(arg1==0)
    {
        g[18]=0;
        biryan[18]="\0";
    }
}


void dialogpart6::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[19]=199;
        biryan[19]="Chicken Fried Rice";
    }
    else if(arg1==0)
    {
        g[19]=0;
        biryan[19]="\0";
    }
}


void dialogpart6::on_checkBox_25_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        g[20]=199;
        biryan[20]="Egg Fried Rice";
    }
    else if(arg1==0)
    {
        g[20]=0;
        biryan[20]="\0";
    }
}


void dialogpart6::on_pushButton_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<21;i++)
    {
        if(biryan[i]!="\0" && g[i]!=0)
        {
            l=l+1;
            sum=sum+g[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<g[i]<<endl;
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
          for(int i=0;i<21;i++)
          {
              if(biryan[i]!="\0")
              {
                  in<<" "<<"\n"<<biryan[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
}


void dialogpart6::on_pushButton_2_clicked()
{
    hide();
}


void dialogpart6::on_pushButton_3_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}

