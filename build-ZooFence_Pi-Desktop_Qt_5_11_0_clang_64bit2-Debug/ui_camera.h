/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ver111;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vert2222;
    QLabel *label;
    QPushButton *capture;
    QPushButton *save;
    QPushButton *quit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(627, 405);
        centralWidget = new QWidget(Camera);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 620, 351));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 391, 331));
        ver111 = new QVBoxLayout(verticalLayoutWidget);
        ver111->setSpacing(6);
        ver111->setContentsMargins(11, 11, 11, 11);
        ver111->setObjectName(QStringLiteral("ver111"));
        ver111->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(419, 10, 191, 331));
        vert2222 = new QVBoxLayout(verticalLayoutWidget_2);
        vert2222->setSpacing(6);
        vert2222->setContentsMargins(11, 11, 11, 11);
        vert2222->setObjectName(QStringLiteral("vert2222"));
        vert2222->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        vert2222->addWidget(label);

        capture = new QPushButton(verticalLayoutWidget_2);
        capture->setObjectName(QStringLiteral("capture"));

        vert2222->addWidget(capture);

        save = new QPushButton(verticalLayoutWidget_2);
        save->setObjectName(QStringLiteral("save"));

        vert2222->addWidget(save);

        quit = new QPushButton(verticalLayoutWidget_2);
        quit->setObjectName(QStringLiteral("quit"));

        vert2222->addWidget(quit);

        mainToolBar = new QToolBar(Camera);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 8, 17));
        statusBar = new QStatusBar(Camera);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 22));

        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QWidget *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "MainWindow", nullptr));
        label->setText(QApplication::translate("Camera", "TextLabel", nullptr));
        capture->setText(QApplication::translate("Camera", "\346\211\221\346\215\211", nullptr));
        save->setText(QApplication::translate("Camera", "\344\277\235\345\255\230", nullptr));
        quit->setText(QApplication::translate("Camera", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
