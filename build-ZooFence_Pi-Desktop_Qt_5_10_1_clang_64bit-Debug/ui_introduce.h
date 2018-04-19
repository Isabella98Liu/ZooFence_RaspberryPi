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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_introduce
{
public:

    void setupUi(QWidget *introduce)
    {
        if (introduce->objectName().isEmpty())
            introduce->setObjectName(QStringLiteral("introduce"));
        introduce->resize(400, 300);

        retranslateUi(introduce);

        QMetaObject::connectSlotsByName(introduce);
    } // setupUi

    void retranslateUi(QWidget *introduce)
    {
        introduce->setWindowTitle(QApplication::translate("introduce", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce: public Ui_introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
