/********************************************************************************
** Form generated from reading UI file 'introduce.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_H
#define UI_INTRODUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_introduce
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QWidget *introduce)
    {
        if (introduce->objectName().isEmpty())
            introduce->setObjectName(QStringLiteral("introduce"));
        introduce->resize(690, 535);
        QFont font;
        font.setPointSize(12);
        introduce->setFont(font);
        pushButton = new QPushButton(introduce);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 200, 171, 81));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(introduce);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 161, 121));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);
        pushButton_2 = new QPushButton(introduce);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 360, 171, 81));
        pushButton_2->setFont(font1);
        label_2 = new QLabel(introduce);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 50, 261, 421));

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
        label->setText(QApplication::translate("introduce", "<html><head/><body><p>Hi,</p><p>\346\254\242\350\277\216\344\275\277\347\224\250\357\274\201</p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("introduce", "\347\224\250\346\210\267\346\211\213\345\206\214", nullptr));
        label_2->setText(QApplication::translate("introduce", "<html><head/><body><p align=\"center\">\347\263\273\347\273\237\347\256\200\344\273\213\357\274\232</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347"
                        "\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213</p><p align=\"center\">\350\277\231\346\230\257\344\270\200\346\256\265\347\263\273\347\273\237\347\256\200\344\273\213<br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce: public Ui_introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
