/********************************************************************************
** Form generated from reading UI file 'userbook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERBOOK_H
#define UI_USERBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userBook
{
public:
    QLabel *back;
    QLabel *label;

    void setupUi(QWidget *userBook)
    {
        if (userBook->objectName().isEmpty())
            userBook->setObjectName(QStringLiteral("userBook"));
        userBook->resize(690, 535);
        back = new QLabel(userBook);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(30, 30, 50, 50));
        label = new QLabel(userBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 110, 571, 371));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));

        retranslateUi(userBook);

        QMetaObject::connectSlotsByName(userBook);
    } // setupUi

    void retranslateUi(QWidget *userBook)
    {
        userBook->setWindowTitle(QApplication::translate("userBook", "Form", nullptr));
        back->setText(QApplication::translate("userBook", "<html><head/><body><p><img src=\":/.001/Resources/004/return.png\" height=\"50\" width=\"50\"/></p></body></html>", nullptr));
        label->setText(QApplication::translate("userBook", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210"
                        "\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214</span></p><p align=\"center\"><span style=\" font-size:24pt;\">\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214\350\277\231\346\230\257\347\224\250\346\210\267\346\211\213\345\206\214<br/></span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userBook: public Ui_userBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERBOOK_H
