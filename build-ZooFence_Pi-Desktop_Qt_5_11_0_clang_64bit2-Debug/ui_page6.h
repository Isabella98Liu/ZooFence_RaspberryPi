/********************************************************************************
** Form generated from reading UI file 'page6.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE6_H
#define UI_PAGE6_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page6
{
public:
    QLabel *returnButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QScrollBar *verticalScrollBar;

    void setupUi(QWidget *page6)
    {
        if (page6->objectName().isEmpty())
            page6->setObjectName(QStringLiteral("page6"));
        page6->resize(690, 535);
        returnButton = new QLabel(page6);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(10, 10, 50, 50));
        returnButton->setPixmap(QPixmap(QString::fromUtf8(":/.001/Resources/004/return.png")));
        returnButton->setScaledContents(true);
        label_2 = new QLabel(page6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 20, 601, 71));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_3 = new QLabel(page6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(181, 30, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label_3->setFont(font);
        label_4 = new QLabel(page6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(411, 30, 81, 21));
        label_4->setFont(font);
        comboBox = new QComboBox(page6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(361, 60, 191, 22));
        pushButton = new QPushButton(page6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(591, 20, 75, 71));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Recource/fine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        dateEdit = new QDateEdit(page6);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(120, 60, 181, 22));
        verticalScrollBar = new QScrollBar(page6);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(650, 120, 16, 381));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(page6);

        QMetaObject::connectSlotsByName(page6);
    } // setupUi

    void retranslateUi(QWidget *page6)
    {
        page6->setWindowTitle(QApplication::translate("page6", "Form", nullptr));
        returnButton->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("page6", "\346\227\245\346\234\237 \357\274\232", nullptr));
        label_4->setText(QApplication::translate("page6", "\350\247\246\345\217\221\346\272\220 \357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("page6", "\345\205\250\351\203\250", nullptr));
        comboBox->setItemText(1, QApplication::translate("page6", "\346\211\213\345\212\250\346\210\252\345\233\276", nullptr));
        comboBox->setItemText(2, QApplication::translate("page6", "\346\277\200\345\205\211\345\257\271\345\260\204", nullptr));
        comboBox->setItemText(3, QApplication::translate("page6", "\350\266\205\345\243\260\346\263\242", nullptr));
        comboBox->setItemText(4, QApplication::translate("page6", "\345\216\213\346\225\217", nullptr));

        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page6: public Ui_page6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE6_H
