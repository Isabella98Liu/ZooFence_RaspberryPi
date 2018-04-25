/********************************************************************************
** Form generated from reading UI file 'page8.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE8_H
#define UI_PAGE8_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page8
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *page8)
    {
        if (page8->objectName().isEmpty())
            page8->setObjectName(QStringLiteral("page8"));
        page8->resize(645, 438);
        label_2 = new QLabel(page8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 451, 371));
        label_2->setFrameShape(QFrame::Box);
        pushButton = new QPushButton(page8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 390, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/.001/Resources/008/smaller.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(page8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 390, 31, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/.001/Resources/008/bigger.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        label_3 = new QLabel(page8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 10, 151, 371));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_4 = new QLabel(page8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 50, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        label_4->setFont(font);
        label_5 = new QLabel(page8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(500, 90, 131, 31));
        label_5->setFont(font);
        label_6 = new QLabel(page8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 140, 81, 31));
        label_6->setFont(font);
        label_7 = new QLabel(page8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(500, 180, 131, 31));
        label_7->setFont(font);
        label_8 = new QLabel(page8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(500, 260, 91, 31));
        label_8->setFont(font);
        label_9 = new QLabel(page8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(530, 300, 71, 31));
        label_9->setFont(font);

        retranslateUi(page8);

        QMetaObject::connectSlotsByName(page8);
    } // setupUi

    void retranslateUi(QWidget *page8)
    {
        page8->setWindowTitle(QApplication::translate("page8", "Form", nullptr));
        label_2->setText(QApplication::translate("page8", "picture", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("page8", "\346\227\245\346\234\237 \357\274\232", nullptr));
        label_5->setText(QApplication::translate("page8", "yyyy -MM -dd", nullptr));
        label_6->setText(QApplication::translate("page8", "\346\227\266\351\227\264 \357\274\232", nullptr));
        label_7->setText(QApplication::translate("page8", "hh : mm : ss", nullptr));
        label_8->setText(QApplication::translate("page8", "\350\247\246\345\217\221\346\272\220 \357\274\232", nullptr));
        label_9->setText(QApplication::translate("page8", "\347\272\242\345\244\226\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page8: public Ui_page8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE8_H
