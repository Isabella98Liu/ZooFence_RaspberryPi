/********************************************************************************
** Form generated from reading UI file 'page6.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE6_H
#define UI_PAGE6_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page6
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *page6)
    {
        if (page6->objectName().isEmpty())
            page6->setObjectName(QStringLiteral("page6"));
        page6->resize(850, 520);
        label_2 = new QLabel(page6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 551, 71));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_3 = new QLabel(page6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 30, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label_3->setFont(font);
        label_4 = new QLabel(page6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 30, 81, 21));
        label_4->setFont(font);
        comboBox = new QComboBox(page6);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(441, 60, 191, 22));
        comboBox->setEditable(false);
        pushButton = new QPushButton(page6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 40, 30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/.001/Resources/006/fine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(25, 25));
        dateEdit = new QDateEdit(page6);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(200, 60, 181, 22));
        dateEdit->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        gridLayoutWidget = new QWidget(page6);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 110, 791, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(page6);

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(page6);
    } // setupUi

    void retranslateUi(QWidget *page6)
    {
        page6->setWindowTitle(QApplication::translate("page6", "Form", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("page6", "\346\227\245\346\234\237 \357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("page6", "\350\247\246\345\217\221\346\272\220 \357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("page6", "\345\205\250\351\203\250", Q_NULLPTR)
         << QApplication::translate("page6", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("page6", "\345\233\264\346\240\217\347\277\273\350\266\212", Q_NULLPTR)
         << QApplication::translate("page6", "\351\235\240\350\277\221\346\240\217\346\235\206", Q_NULLPTR)
         << QApplication::translate("page6", "\345\212\250\347\211\251\351\235\240\350\277\221", Q_NULLPTR)
        );
        comboBox->setCurrentText(QApplication::translate("page6", "\345\205\250\351\203\250", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page6: public Ui_page6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE6_H
