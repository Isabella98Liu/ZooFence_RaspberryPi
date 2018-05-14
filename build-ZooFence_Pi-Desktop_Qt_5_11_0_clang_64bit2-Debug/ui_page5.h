/********************************************************************************
** Form generated from reading UI file 'page5.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE5_H
#define UI_PAGE5_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page5
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_13;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_4;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QWidget *page5)
    {
        if (page5->objectName().isEmpty())
            page5->setObjectName(QStringLiteral("page5"));
        page5->resize(1024, 600);
        pushButton = new QPushButton(page5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 140, 171, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(16);
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/.001/Resources/005/researching.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(page5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 260, 171, 81));
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/.001/Resources/005/checking.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_3 = new QPushButton(page5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 380, 171, 81));
        pushButton_3->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/.001/Resources/005/vedio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(40, 40));
        label = new QLabel(page5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(510, 80, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        label->setFont(font1);
        label_2 = new QLabel(page5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 140, 91, 41));
        label_2->setFont(font1);
        label_3 = new QLabel(page5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 80, 251, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(page5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(630, 140, 261, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(page5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(540, 490, 51, 31));
        label_5->setFont(font);
        label_6 = new QLabel(page5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(670, 490, 41, 31));
        label_6->setFont(font);
        label_8 = new QLabel(page5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 260, 51, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(22);
        label_8->setFont(font2);
        label_9 = new QLabel(page5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(660, 260, 51, 31));
        label_9->setFont(font2);
        label_13 = new QLabel(page5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(540, 320, 41, 141));
        label_13->setTextFormat(Qt::PlainText);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/.001/Resources/005/tem.png")));
        label_13->setScaledContents(true);
        verticalSlider = new QSlider(page5);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(550, 330, 22, 111));
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(0);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider_2 = new QSlider(page5);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(680, 330, 22, 111));
        verticalSlider_2->setMaximum(100);
        verticalSlider_2->setOrientation(Qt::Vertical);
        label_11 = new QLabel(page5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(480, 50, 421, 160));
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        label_12 = new QLabel(page5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(480, 230, 421, 321));
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	border: 0px;\n"
"	border-radius: 6px;\n"
"	background-color : LightGray\n"
"}"));
        pushButton_4 = new QPushButton(page5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 20, 30, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/.001/Resources/004/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));
        label_14 = new QLabel(page5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(670, 320, 41, 141));
        label_14->setTextFormat(Qt::PlainText);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/.001/Resources/005/tem.png")));
        label_14->setScaledContents(true);
        label_16 = new QLabel(page5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(580, 260, 41, 31));
        label_16->setFont(font2);
        label_17 = new QLabel(page5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(710, 260, 31, 31));
        label_17->setFont(font2);

        retranslateUi(page5);

        QMetaObject::connectSlotsByName(page5);
    } // setupUi

    void retranslateUi(QWidget *page5)
    {
        page5->setWindowTitle(QApplication::translate("page5", "page5", nullptr));
        pushButton->setText(QApplication::translate("page5", "\346\237\245\350\257\242\350\256\260\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("page5", "\344\270\200\351\224\256\350\207\252\346\243\200", nullptr));
        pushButton_3->setText(QApplication::translate("page5", "\345\256\236\346\227\266\346\231\257\350\261\241", nullptr));
        label->setText(QApplication::translate("page5", "<html><head/><body><p>\346\227\245\346\234\237 \357\274\232</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("page5", "<html><head/><body><p>\346\227\266\351\227\264 \357\274\232</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("page5", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("page5", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("page5", "<html><head/><body><p>\346\270\251\345\272\246</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("page5", "<html><head/><body><p>\346\271\277\345\272\246</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("page5", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("page5", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_13->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        pushButton_4->setText(QString());
        label_14->setText(QString());
        label_16->setText(QApplication::translate("page5", "<html><head/><body><p>\302\260C</p></body></html>", nullptr));
        label_17->setText(QApplication::translate("page5", "<html><head/><body><p>%</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page5: public Ui_page5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE5_H
