/********************************************************************************
** Form generated from reading UI file 'alertpage9.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTPAGE9_H
#define UI_ALERTPAGE9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alertPage9
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *alertPage9)
    {
        if (alertPage9->objectName().isEmpty())
            alertPage9->setObjectName(QStringLiteral("alertPage9"));
        alertPage9->resize(537, 373);
        label = new QLabel(alertPage9);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 151, 191));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_2 = new QLabel(alertPage9);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 50, 270, 270));
        pushButton = new QPushButton(alertPage9);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 290, 61, 31));
        pushButton_2 = new QPushButton(alertPage9);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 290, 61, 31));
        label_3 = new QLabel(alertPage9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 80, 91, 31));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        label_4 = new QLabel(alertPage9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 60, 16));
        label_5 = new QLabel(alertPage9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 160, 60, 16));
        label_6 = new QLabel(alertPage9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 190, 60, 16));

        retranslateUi(alertPage9);

        QMetaObject::connectSlotsByName(alertPage9);
    } // setupUi

    void retranslateUi(QWidget *alertPage9)
    {
        alertPage9->setWindowTitle(QApplication::translate("alertPage9", "Form", nullptr));
        label->setText(QApplication::translate("alertPage9", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("alertPage9", "\343\200\220Video Sream\343\200\221", nullptr));
        pushButton->setText(QApplication::translate("alertPage9", "\345\275\225\345\203\217", nullptr));
        pushButton_2->setText(QApplication::translate("alertPage9", "\346\210\252\345\233\276", nullptr));
        label_3->setText(QApplication::translate("alertPage9", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\212\245\350\255\246\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("alertPage9", "\346\227\245\346\234\237\357\274\232", nullptr));
        label_5->setText(QApplication::translate("alertPage9", "\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QApplication::translate("alertPage9", "\350\247\246\345\217\221\346\272\220\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alertPage9: public Ui_alertPage9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTPAGE9_H
