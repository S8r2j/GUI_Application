#include "dialogpart3.h"
#include "ui_dialogpart3.h"
#include"QMessageBox"
#include"QFile"
#include"fstream"
#include"QDebug"
#include"iostream"
#include"billingpart.h"
using namespace std;
dialogpart3::dialogpart3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogpart3)
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

dialogpart3::~dialogpart3()
{
    delete ui;
}
//vegmaincourse

void dialogpart3::on_checkBox_stateChanged(int arg1)
{
    if(arg1>=1){
        d[0]=49;
        vgmaincourse[0]="Bundi Raita";
    }
    else if(arg1==0){
        d[0]=0;
        vgmaincourse[0]="\0";
}
}


void dialogpart3::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1>=1){
        d[1]=179;
        vgmaincourse[1]="Mix Veg";
    }
    else if(arg1==0){
        d[1]=0;
        vgmaincourse[1]="\0";
}
}


void dialogpart3::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1>=1){
        d[2]=179;
        vgmaincourse[2]="Veg Kolhapuri";
    }
    else if(arg1==0){
        d[2]=0;
        vgmaincourse[2]="\0";
}
}


void dialogpart3::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1>=1){
        d[3]=179;
        vgmaincourse[3]="Veg Kheema Kasturi";
    }
    else if(arg1==0){
        d[3]=0;
        vgmaincourse[3]="\0";
}
}


void dialogpart3::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1>=1){
        d[4]=199;
        vgmaincourse[4]="Veg Egg Curry";
    }
    else if(arg1==0){
        d[4]=0;
        vgmaincourse[4]="\0";
}
}


void dialogpart3::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1>=1){
        d[5]=199;
        vgmaincourse[5]="Veg Kofta";
    }
    else if(arg1==0){
        d[5]=0;
        vgmaincourse[5]="\0";
}
}


void dialogpart3::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1>=1){
        d[6]=159;
        vgmaincourse[6]="Zeera Aaloo";
    }
    else if(arg1==0){
        d[6]=0;
        vgmaincourse[6]="\0";
}
}


void dialogpart3::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1>=1){
        d[7]=179;
        vgmaincourse[7]="Sev Bhaji";
    }
    else if(arg1==0){
        d[7]=0;
        vgmaincourse[7]="\0";
}
}


void dialogpart3::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1>=1){
        d[8]=199;
        vgmaincourse[0]="Paneer Butter Masala";
    }
    else if(arg1==0){
        d[8]=0;
        vgmaincourse[8]="\0";
}
}


void dialogpart3::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1>=1){
        d[9]=239;
        vgmaincourse[9]="Paneer Tikka Masala";
    }
    else if(arg1==0){
        d[9]=0;
        vgmaincourse[9]="\0";
}
}


void dialogpart3::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1>=1){
        d[10]=199;
        vgmaincourse[10]="Paneer Chatpata";
    }
    else if(arg1==0){
        d[10]=0;
        vgmaincourse[10]="\0";
}
}


void dialogpart3::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1>=1){
        d[11]=199;
        vgmaincourse[11]="Kadhai Paneer";
    }
    else if(arg1==0){
        d[11]=0;
        vgmaincourse[11]="\0";
}
}


void dialogpart3::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1>=1){
        d[12]=199;
        vgmaincourse[12]="Mutter Paneer";
    }
    else if(arg1==0){
        d[12]=0;
        vgmaincourse[12]="\0";
}
}


void dialogpart3::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1>=1){
        d[13]=222;
        vgmaincourse[13]="Paneer Bhurji";
    }
    else if(arg1==0){
        d[13]=0;
        vgmaincourse[13]="\0";
}
}


void dialogpart3::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1>=1){
        d[14]=199;
        vgmaincourse[14]="Paneer Punjabi";
    }
    else if(arg1==0){
        d[14]=0;
        vgmaincourse[14]="\0";
}
}


void dialogpart3::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1>=1){
        d[15]=199;
        vgmaincourse[15]="Paneer Saoji";
    }
    else if(arg1==0){
        d[15]=0;
        vgmaincourse[15]="\0";
}
}


void dialogpart3::on_checkBox_17_stateChanged(int arg1)
{
    if(arg1>=1){
        d[16]=199;
        vgmaincourse[16]="Paneer Kolhapuri";
    }
    else if(arg1==0){
        d[16]=0;
        vgmaincourse[16]="\0";
}
}


void dialogpart3::on_checkBox_18_stateChanged(int arg1)
{
    if(arg1>=1){
        d[17]=199;
        vgmaincourse[17]="Paneer Masala";
    }
    else if(arg1==0){
        d[17]=0;
        vgmaincourse[17]="\0";
}
}


void dialogpart3::on_checkBox_19_stateChanged(int arg1)
{
    if(arg1>=1){
        d[18]=199;
        vgmaincourse[18]="Paneer Handi";
    }
    else if(arg1==0){
        d[18]=0;
        vgmaincourse[18]="\0";
}
}


void dialogpart3::on_checkBox_20_stateChanged(int arg1)
{
    if(arg1>=1){
        d[19]=199;
        vgmaincourse[19]="Lachha Paneer";
    }
    else if(arg1==0){
        d[19]=0;
        vgmaincourse[19]="\0";
}
}


void dialogpart3::on_checkBox_21_stateChanged(int arg1)
{
    if(arg1>=1){
        d[20]=99;
        vgmaincourse[20]="Zeera Daal";
    }
    else if(arg1==0){
        d[20]=0;
        vgmaincourse[20]="\0";
}
}


void dialogpart3::on_checkBox_22_stateChanged(int arg1)
{
    if(arg1>=1){
        d[21]=119;
        vgmaincourse[21]="Daal Fry";
    }
    else if(arg1==0){
        d[21]=0;
        vgmaincourse[21]="\0";
}
}


void dialogpart3::on_checkBox_23_stateChanged(int arg1)
{
    if(arg1>=1){
        d[22]=129;
        vgmaincourse[22]="Daal Tadka";
    }
    else if(arg1==0){
        d[22]=0;
        vgmaincourse[22]="\0";
}
}


void dialogpart3::on_pushButton_clicked()
{
    int sum=0;
    int l=0;
    for(int i=0;i<23;i++)
    {
        if(vgmaincourse[i]!="\0" && d[i]!=0)
        {
            l=l+1;
            sum=sum+d[i];
            ofstream out("C:/Users/myide/Documents/SSSN/billings.txt", std::ios_base::app);
            out<<d[i]<<endl;
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
          for(int i=0;i<23;i++)
          {
              if(vgmaincourse[i]!="\0")
              {
                  in<<" "<<"\n"<<vgmaincourse[i];
              }
          }
                QMessageBox::information(this,"Ordered","Your order has been placed. Please wait....");
                c= new cookscreen(this);
                c->show();
            }

        }
}


void dialogpart3::on_pushButton_2_clicked()
{
    hide();
    bill = new billingpart(this);
    bill->show();
}


void dialogpart3::on_pushButton_3_clicked()
{
    hide();
}

