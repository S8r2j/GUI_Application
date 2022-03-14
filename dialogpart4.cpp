#include "dialogpart4.h"
#include "ui_dialogpart4.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart4::dialogpart4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart4)
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

dialogpart4::~dialogpart4()
{
    delete ui;
}

void dialogpart4::on_checkBox_70_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[0]=249;
        nonvegmaicour[0]="Mutton RaRa Masala:Portion";
    }
    else if(arg1==0)
    {
        e[0]=0;
        nonvegmaicour[0]="\0";
    }
}


void dialogpart4::on_checkBox_71_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[1]=399;
        nonvegmaicour[1]="Mutton RaRa Masala:Half";
    }
    else if(arg1==0)
    {
        e[1]=0;
        nonvegmaicour[1]="\0";
    }
}


void dialogpart4::on_checkBox_72_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[2]=699;
        nonvegmaicour[2]="Mutton RaRa Masala:Full";
    }
    else if(arg1==0)
    {
        e[2]=0;
        nonvegmaicour[2]="\0";
    }
}


void dialogpart4::on_checkBox_79_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[3]=189;
        nonvegmaicour[3]="Chicken Curry:Portion";
    }
    else if(arg1==0)
    {
        e[3]=0;
        nonvegmaicour[3]="\0";
    }
}


void dialogpart4::on_checkBox_80_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[4]=333;
        nonvegmaicour[4]="Chicken Curry:Half";
    }
    else if(arg1==0)
    {
        e[4]=0;
        nonvegmaicour[4]="\0";
    }
}


void dialogpart4::on_checkBox_81_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[5]=555;
        nonvegmaicour[5]="Chicken Curry:Full";
    }
    else if(arg1==0)
    {
        e[5]=0;
        nonvegmaicour[5]="\0";
    }
}


void dialogpart4::on_checkBox_67_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[6]=189;
        nonvegmaicour[6]="Chicken Masala:Portion";
    }
    else if(arg1==0)
    {
        e[6]=0;
        nonvegmaicour[6]="\0";
    }
}


void dialogpart4::on_checkBox_68_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[7]=189;
        nonvegmaicour[7]="Chicken Masala:Half";
    }
    else if(arg1==0)
    {
        e[7]=0;
        nonvegmaicour[7]="\0";
    }
}


void dialogpart4::on_checkBox_69_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[8]=333;
        nonvegmaicour[8]="Chicken Masala:Full";
    }
    else if(arg1==0)
    {
        e[8]=0;
        nonvegmaicour[8]="\0";
    }
}


void dialogpart4::on_checkBox_64_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[9]=189;
        nonvegmaicour[9]="Chicken Rogan Josh:Portion";
    }
    else if(arg1==0)
    {
        e[9]=0;
        nonvegmaicour[9]="\0";
    }
}


void dialogpart4::on_checkBox_65_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[10]=333;
        nonvegmaicour[10]="Chicken Rogan Josh:Half";
    }
    else if(arg1==0)
    {
        e[10]=0;
        nonvegmaicour[10]="\0";
    }
}


void dialogpart4::on_checkBox_66_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[11]=555;
        nonvegmaicour[11]="Chicken Rogan Josh:Full";
    }
    else if(arg1==0)
    {
        e[11]=0;
        nonvegmaicour[11]="\0";
    }
}


void dialogpart4::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[12]=199;
        nonvegmaicour[12]="Chicken Mughlai:Portion";
    }
    else if(arg1==0)
    {
        e[12]=0;
        nonvegmaicour[12]="\0";
    }
}


void dialogpart4::on_checkBox_20_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[13]=349;
        nonvegmaicour[13]="Chicken Mughlai:Half";
    }
    else if(arg1==0)
    {
        e[13]=0;
        nonvegmaicour[13]="\0";
    }
}


void dialogpart4::on_checkBox_21_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[14]=599;
        nonvegmaicour[14]="Chicken Mughlai:Full";
    }
    else if(arg1==0)
    {
        e[14]=0;
        nonvegmaicour[14]="\0";
    }
}


void dialogpart4::on_checkBox_34_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[15]=189;
        nonvegmaicour[15]="Kadhai Chicken:Portion";
    }
    else if(arg1==0)
    {
        e[15]=0;
        nonvegmaicour[15]="\0";
    }
}


void dialogpart4::on_checkBox_35_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[16]=333;
        nonvegmaicour[16]="Kadhai Chicken:Half";
    }
    else if(arg1==0)
    {
        e[16]=0;
        nonvegmaicour[16]="\0";
    }
}


void dialogpart4::on_checkBox_36_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[17]=555;
        nonvegmaicour[17]="Kadhai Chicken:Full";
    }
    else if(arg1==0)
    {
        e[17]=0;
        nonvegmaicour[17]="\0";
    }
}


void dialogpart4::on_checkBox_22_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[18]=189;
        nonvegmaicour[18]="Chicken Saoji:Portion";
    }
    else if(arg1==0)
    {
        e[18]=0;
        nonvegmaicour[18]="\0";
    }
}


void dialogpart4::on_checkBox_23_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[19]=333;
        nonvegmaicour[19]="Chicken Saoji:Half";
    }
    else if(arg1==0)
    {
        e[19]=0;
        nonvegmaicour[19]="\0";
    }
}


void dialogpart4::on_checkBox_24_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[20]=555;
        nonvegmaicour[20]="Chicken Saoji:Full";
    }
    else if(arg1==0)
    {
        e[20]=0;
        nonvegmaicour[20]="\0";
    }
}


void dialogpart4::on_checkBox_25_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[21]=189;
        nonvegmaicour[21]="Dhaba Chicken:Portion";
    }
    else if(arg1==0)
    {
        e[21]=0;
        nonvegmaicour[21]="\0";
    }
}


void dialogpart4::on_checkBox_26_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[22]=333;
        nonvegmaicour[22]="Dhaba Chicken:Half";
    }
    else if(arg1==0)
    {
        e[22]=0;
        nonvegmaicour[22]="\0";
    }
}


void dialogpart4::on_checkBox_27_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[23]=555;
        nonvegmaicour[23]="Dhaba Chicken:Full";
    }
    else if(arg1==0)
    {
        e[23]=0;
        nonvegmaicour[23]="\0";
    }
}


void dialogpart4::on_checkBox_40_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[24]=189;
        nonvegmaicour[24]="Handi Chicken:Portion";
    }
    else if(arg1==0)
    {
        e[24]=0;
        nonvegmaicour[24]="\0";
    }
}


void dialogpart4::on_checkBox_41_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[25]=333;
        nonvegmaicour[25]="Handi Chicken:Half";
    }
    else if(arg1==0)
    {
        e[25]=0;
        nonvegmaicour[25]="\0";
    }
}


void dialogpart4::on_checkBox_42_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[26]=555;
        nonvegmaicour[26]="Handi Chicken:Full";
    }
    else if(arg1==0)
    {
        e[26]=0;
        nonvegmaicour[26]="\0";
    }
}


void dialogpart4::on_checkBox_28_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[27]=222;
        nonvegmaicour[27]="Mutton Curry:Portion";
    }
    else if(arg1==0)
    {
        e[27]=0;
        nonvegmaicour[27]="\0";
    }
}


void dialogpart4::on_checkBox_29_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[28]=389;
        nonvegmaicour[28]="Mutton Curry:Half";
    }
    else if(arg1==0)
    {
        e[28]=0;
        nonvegmaicour[28]="\0";
    }
}


void dialogpart4::on_checkBox_30_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[29]=699;
        nonvegmaicour[29]="Mutton Curry:Full";
    }
    else if(arg1==0)
    {
        e[29]=0;
        nonvegmaicour[29]="\0";
    }
}


void dialogpart4::on_checkBox_37_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[30]=222;
        nonvegmaicour[30]="Mutton Masala:Portion";
    }
    else if(arg1==0)
    {
        e[30]=0;
        nonvegmaicour[30]="\0";
    }
}


void dialogpart4::on_checkBox_38_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[31]=389;
        nonvegmaicour[31]="Mutton Masala:Half";
    }
    else if(arg1==0)
    {
        e[31]=0;
        nonvegmaicour[31]="\0";
    }
}


void dialogpart4::on_checkBox_39_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[32]=699;
        nonvegmaicour[32]="Mutton Masala:Full";
    }
    else if(arg1==0)
    {
        e[32]=0;
        nonvegmaicour[32]="\0";
    }
}


void dialogpart4::on_checkBox_31_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[33]=222;
        nonvegmaicour[33]="Mutton Rogan Josh:Portion";
    }
    else if(arg1==0)
    {
        e[33]=0;
        nonvegmaicour[33]="\0";
    }
}


void dialogpart4::on_checkBox_32_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[34]=389;
        nonvegmaicour[34]="Mutton Rogan Josh:Half";
    }
    else if(arg1==0)
    {
        e[34]=0;
        nonvegmaicour[34]="\0";
    }
}


void dialogpart4::on_checkBox_33_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[35]=699;
        nonvegmaicour[35]="Mutton Rogan Josh:Full";
    }
    else if(arg1==0)
    {
        e[35]=0;
        nonvegmaicour[35]="\0";
    }
}


void dialogpart4::on_checkBox_43_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[36]=222;
        nonvegmaicour[36]="Mutton Saoji:Portion";
    }
    else if(arg1==0)
    {
        e[36]=0;
        nonvegmaicour[36]="\0";
    }
}


void dialogpart4::on_checkBox_44_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[37]=389;
        nonvegmaicour[37]="Mutton Saoji:Half";
    }
    else if(arg1==0)
    {
        e[37]=0;
        nonvegmaicour[37]="\0";
    }
}


void dialogpart4::on_checkBox_45_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[38]=699;
        nonvegmaicour[38]="Mutton Saoji:Full";
    }
    else if(arg1==0)
    {
        e[38]=0;
        nonvegmaicour[38]="\0";
    }
}


void dialogpart4::on_checkBox_46_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[39]=222;
        nonvegmaicour[39]="Mutton Handi:Portion";
    }
    else if(arg1==0)
    {
        e[39]=0;
        nonvegmaicour[39]="\0";
    }
}


void dialogpart4::on_checkBox_47_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[40]=389;
        nonvegmaicour[40]="Mutton Handi:Half";
    }
    else if(arg1==0)
    {
        e[40]=0;
        nonvegmaicour[40]="\0";
    }
}


void dialogpart4::on_checkBox_48_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[42]=699;
        nonvegmaicour[42]="Mutton Handi:Full";
    }
    else if(arg1==0)
    {
        e[42]=0;
        nonvegmaicour[42]="\0";
    }
}


void dialogpart4::on_checkBox_49_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[43]=99;
        nonvegmaicour[43]="Egg Curry";
    }
    else if(arg1==0)
    {
        e[43]=0;
        nonvegmaicour[43]="\0";
    }
}


void dialogpart4::on_checkBox_52_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[44]=99;
        nonvegmaicour[44]="Egg Saoji Curry";
    }
    else if(arg1==0)
    {
        e[44]=0;
        nonvegmaicour[44]="\0";
    }
}


void dialogpart4::on_checkBox_55_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[45]=111;
        nonvegmaicour[45]="Egg Bhurji Curry";
    }
    else if(arg1==0)
    {
        e[45]=0;
        nonvegmaicour[45]="\0";
    }
}


void dialogpart4::on_checkBox_58_stateChanged(int arg1)
{
    if(arg1>=1)
    {
        e[46]=99;
        nonvegmaicour[46]="Egg Masala";
    }
    else if(arg1==0)
    {
        e[46]=0;
        nonvegmaicour[46]="\0";
    }
}



void dialogpart4::on_pushButton_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<47;i++)
    {
        if(nonvegmaicour[i]!="\0" && e[i]!=0)
        {
            l=l+1;
            sum=sum+e[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<e[i]<<endl;
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
          for(int i=0;i<47;i++)
          {
              if(nonvegmaicour[i]!="\0")
              {
                  in<<" "<<"\n"<<nonvegmaicour[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
}


void dialogpart4::on_pushButton_2_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}


void dialogpart4::on_pushButton_3_clicked()
{
    hide();
}

