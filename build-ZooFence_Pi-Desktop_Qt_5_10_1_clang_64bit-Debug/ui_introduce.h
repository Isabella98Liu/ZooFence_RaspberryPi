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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_introduce
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *introduce)
    {
        if (introduce->objectName().isEmpty())
            introduce->setObjectName(QStringLiteral("introduce"));
        introduce->resize(1010, 660);
        pushButton = new QPushButton(introduce);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 200, 80, 24));

        retranslateUi(introduce);

        QMetaObject::connectSlotsByName(introduce);
    } // setupUi

    void retranslateUi(QWidget *introduce)
    {
        introduce->setWindowTitle(QApplication::translate("introduce", "Form", nullptr));
        pushButton->setText(QApplication::translate("introduce", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce: public Ui_introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
