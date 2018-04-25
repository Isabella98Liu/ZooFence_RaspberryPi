/********************************************************************************
** Form generated from reading UI file 'page10.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE10_H
#define UI_PAGE10_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page10
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *page10)
    {
        if (page10->objectName().isEmpty())
            page10->setObjectName(QStringLiteral("page10"));
        page10->resize(690, 535);
        label = new QLabel(page10);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/Recource/return.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(page10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 30, 491, 431));
        label_2->setFrameShape(QFrame::Box);
        pushButton = new QPushButton(page10);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 470, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Recource/picture.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        retranslateUi(page10);

        QMetaObject::connectSlotsByName(page10);
    } // setupUi

    void retranslateUi(QWidget *page10)
    {
        page10->setWindowTitle(QApplication::translate("page10", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("page10", "<html><head/><body><p>vedio</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("page10", "\346\210\252\345\233\276\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page10: public Ui_page10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE10_H
