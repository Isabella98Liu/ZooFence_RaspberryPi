/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomePage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *welcomePage)
    {
        if (welcomePage->objectName().isEmpty())
            welcomePage->setObjectName(QStringLiteral("welcomePage"));
        welcomePage->setEnabled(true);
        welcomePage->resize(690, 535);
        label = new QLabel(welcomePage);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(210, 60, 301, 291));
        label_2 = new QLabel(welcomePage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 360, 151, 81));
        label_3 = new QLabel(welcomePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 470, 121, 20));

        retranslateUi(welcomePage);

        QMetaObject::connectSlotsByName(welcomePage);
    } // setupUi

    void retranslateUi(QWidget *welcomePage)
    {
        welcomePage->setWindowTitle(QApplication::translate("welcomePage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("welcomePage", "<html><head/><body><p><img src=\":/.001/Resources/001/welcomePage.png\" height=\"280\" width=\"280\"/></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("welcomePage", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("welcomePage", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class welcomePage: public Ui_welcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
