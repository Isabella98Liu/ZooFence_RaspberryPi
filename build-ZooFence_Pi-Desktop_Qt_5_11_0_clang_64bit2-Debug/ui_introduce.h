/********************************************************************************
** Form generated from reading UI file 'introduce.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_H
#define UI_INTRODUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_introduce
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *introduce)
    {
        if (introduce->objectName().isEmpty())
            introduce->setObjectName(QStringLiteral("introduce"));
        introduce->resize(694, 535);
        QFont font;
        font.setPointSize(12);
        introduce->setFont(font);
        pushButton = new QPushButton(introduce);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 200, 171, 81));
        QFont font1;
        font1.setPointSize(20);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(introduce);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 161, 121));
        pushButton_2 = new QPushButton(introduce);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 360, 171, 81));
        pushButton_2->setFont(font1);
        textBrowser = new QTextBrowser(introduce);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(340, 50, 251, 391));

        retranslateUi(introduce);

        QMetaObject::connectSlotsByName(introduce);
    } // setupUi

    void retranslateUi(QWidget *introduce)
    {
        introduce->setWindowTitle(QApplication::translate("introduce", "Form", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("introduce", "<html><head/><body><p><img src=\":/.001/Resources/002/login.png\" height=\"25\" width=\"25\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("introduce", "\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("introduce", "<html><head/><body><p><span style=\" font-size:36pt;\">Hi,</span></p><p><span style=\" font-size:36pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\357\274\201</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("introduce", "\347\224\250\346\210\267\346\211\213\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce: public Ui_introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
