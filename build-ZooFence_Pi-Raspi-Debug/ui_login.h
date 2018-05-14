/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *return_2;
    QPushButton *returnButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_6;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(1024, 600);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 80, 150, 150));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 290, 50, 50));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 290, 91, 50));
        label_3->setScaledContents(false);
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 370, 91, 50));
        label_4->setScaledContents(false);
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 370, 50, 50));
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 490, 151, 41));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        return_2 = new QLabel(login);
        return_2->setObjectName(QStringLiteral("return_2"));
        return_2->setGeometry(QRect(30, 30, 50, 50));
        returnButton = new QPushButton(login);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 20, 30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/.001/Resources/004/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/.001/Resources/004/return.png"), QSize(), QIcon::Normal, QIcon::On);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(500, 300, 141, 31));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(500, 380, 141, 31));
        label_6 = new QLabel(login);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 420, 70, 70));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("login", "<html><head/><body><p><img src=\":/.001/Resources/004/login.png\" height=\"150\" width=\"150\"/></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><img src=\":/.001/Resources/004/name.png\" width=\"50\" height=\"50\"/></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("login", "<html><head/><body><p><img src=\":/.001/Resources/004/key.png\" height=\"50\" width=\"50\"/></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        return_2->setText(QString());
        returnButton->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
