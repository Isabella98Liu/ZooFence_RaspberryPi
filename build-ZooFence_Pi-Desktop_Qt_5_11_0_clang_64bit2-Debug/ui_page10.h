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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page10
{
public:
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QWidget *page10)
    {
        if (page10->objectName().isEmpty())
            page10->setObjectName(QStringLiteral("page10"));
        page10->resize(600, 480);
        pushButton = new QPushButton(page10);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 400, 131, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Recource/picture.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        verticalLayoutWidget = new QWidget(page10);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 391, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(page10);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 400, 131, 51));
        label_2 = new QLabel(page10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 30, 161, 121));

        retranslateUi(page10);

        QMetaObject::connectSlotsByName(page10);
    } // setupUi

    void retranslateUi(QWidget *page10)
    {
        page10->setWindowTitle(QApplication::translate("page10", "Form", nullptr));
        pushButton->setText(QApplication::translate("page10", "\346\210\252\345\233\276", nullptr));
        pushButton_2->setText(QApplication::translate("page10", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page10: public Ui_page10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE10_H
