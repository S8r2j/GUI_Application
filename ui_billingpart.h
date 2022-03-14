/********************************************************************************
** Form generated from reading UI file 'billingpart.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLINGPART_H
#define UI_BILLINGPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_billingpart
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_3;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *billingpart)
    {
        if (billingpart->objectName().isEmpty())
            billingpart->setObjectName(QString::fromUtf8("billingpart"));
        billingpart->resize(650, 549);
        billingpart->setStyleSheet(QString::fromUtf8("background-image: url(:/rec/img/5783153.jpg);\n"
"font: 87 8pt \"Arial Black\";"));
        plainTextEdit = new QPlainTextEdit(billingpart);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(200, 200, 271, 181));
        pushButton_3 = new QPushButton(billingpart);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 440, 93, 28));
        plainTextEdit_2 = new QPlainTextEdit(billingpart);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(470, 220, 104, 161));
        plainTextEdit_3 = new QPlainTextEdit(billingpart);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(470, 380, 104, 31));
        layoutWidget = new QWidget(billingpart);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 100, 418, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(billingpart);

        QMetaObject::connectSlotsByName(billingpart);
    } // setupUi

    void retranslateUi(QDialog *billingpart)
    {
        billingpart->setWindowTitle(QCoreApplication::translate("billingpart", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("billingpart", "Close", nullptr));
        plainTextEdit_2->setPlainText(QString());
        pushButton->setText(QCoreApplication::translate("billingpart", "Show Ordered Item Only", nullptr));
        pushButton_2->setText(QCoreApplication::translate("billingpart", "Show Ordered Item With Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class billingpart: public Ui_billingpart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLINGPART_H
