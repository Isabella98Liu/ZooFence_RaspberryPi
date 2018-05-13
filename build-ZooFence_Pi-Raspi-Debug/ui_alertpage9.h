/********************************************************************************
** Form generated from reading UI file 'alertpage9.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTPAGE9_H
#define UI_ALERTPAGE9_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alertPage9
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *alertPage9)
    {
        if (alertPage9->objectName().isEmpty())
            alertPage9->setObjectName(QStringLiteral("alertPage9"));
        alertPage9->resize(608, 483);
        label = new QLabel(alertPage9);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 181, 311));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_3 = new QLabel(alertPage9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 91, 31));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_4 = new QLabel(alertPage9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 160, 41, 16));
        QFont font1;
        font1.setPointSize(16);
        label_4->setFont(font1);
        label_5 = new QLabel(alertPage9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 41, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(alertPage9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 260, 60, 16));
        label_6->setFont(font1);
        verticalLayoutWidget = new QWidget(alertPage9);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 40, 371, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(alertPage9);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 410, 291, 41));
        pushButton_3->setFont(font);
        label_2 = new QLabel(alertPage9);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 160, 111, 21));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_7 = new QLabel(alertPage9);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 210, 111, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(alertPage9);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 280, 151, 71));
        label_8->setFont(font1);

        retranslateUi(alertPage9);

        QMetaObject::connectSlotsByName(alertPage9);
    } // setupUi

    void retranslateUi(QWidget *alertPage9)
    {
        alertPage9->setWindowTitle(QApplication::translate("alertPage9", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("alertPage9", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("alertPage9", "<html><head/><body><p>\346\212\245\350\255\246\344\277\241\346\201\257</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("alertPage9", "\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("alertPage9", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("alertPage9", "\350\247\246\345\217\221\346\272\220\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("alertPage9", "\345\201\234\346\255\242\346\212\245\350\255\246", Q_NULLPTR));
        label_2->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class alertPage9: public Ui_alertPage9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTPAGE9_H
