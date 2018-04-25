/********************************************************************************
** Form generated from reading UI file 'page7.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE7_H
#define UI_PAGE7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page7
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *page7)
    {
        if (page7->objectName().isEmpty())
            page7->setObjectName(QStringLiteral("page7"));
        page7->resize(690, 535);
        label = new QLabel(page7);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 400, 251, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(28);
        label->setFont(font);
        label_2 = new QLabel(page7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 380, 111, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/Recource/ok2.PNG")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(page7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 60, 341, 281));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/.001/Resources/007/OK.PNG")));
        label_3->setScaledContents(true);

        retranslateUi(page7);

        QMetaObject::connectSlotsByName(page7);
    } // setupUi

    void retranslateUi(QWidget *page7)
    {
        page7->setWindowTitle(QApplication::translate("page7", "Form", nullptr));
        label->setText(QApplication::translate("page7", "<html><head/><body><p>\350\256\276\345\244\207\350\277\220\350\241\214\350\211\257\345\245\275\357\274\201</p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page7: public Ui_page7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE7_H
