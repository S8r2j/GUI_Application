/********************************************************************************
** Form generated from reading UI file 'cookscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COOKSCREEN_H
#define UI_COOKSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cookscreen
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *cookscreen)
    {
        if (cookscreen->objectName().isEmpty())
            cookscreen->setObjectName(QString::fromUtf8("cookscreen"));
        cookscreen->resize(830, 671);
        cookscreen->setStyleSheet(QString::fromUtf8("background-image: url(:/rec/img/5783153.jpg);\n"
"font: 87 8pt \"Arial Black\";"));
        plainTextEdit = new QPlainTextEdit(cookscreen);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(140, 90, 451, 401));
        plainTextEdit->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        pushButton = new QPushButton(cookscreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 530, 93, 28));

        retranslateUi(cookscreen);

        QMetaObject::connectSlotsByName(cookscreen);
    } // setupUi

    void retranslateUi(QDialog *cookscreen)
    {
        cookscreen->setWindowTitle(QCoreApplication::translate("cookscreen", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("cookscreen", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cookscreen: public Ui_cookscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COOKSCREEN_H
