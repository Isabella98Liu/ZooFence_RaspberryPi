#include "page6.h"
#include "ui_page6.h"
#include <QDebug>

page6::page6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page6)
{
    ui->setupUi(this);
    folderPath = qApp->applicationDirPath() +  QString("/pics");
    dateEdit = ui->dateEdit;
    dateEdit->setCalendarPopup(true);
    searchButton = ui->pushButton;
    searchButton->setObjectName("searchButton");
    showImageList();
}

page6::~page6()
{
    delete ui;
}


void page6::showImageList()
{
    QListWidget *imageList = new QListWidget;   // create a qlistwidget to show the image list
//------------------------------------------------------------------------------
    imageList->resize(500, 500);
    imageList->setViewMode(QListView::IconMode);
    imageList->setIconSize(QSize(120, 120));
    imageList->setSpacing(5);
    imageList->setResizeMode(QListWidget::Adjust);
    imageList->setMovement(QListWidget::Static);
//------------------------------------------------------------------------------
    QDir dir(folderPath);  // get the directory of the folder
    QStringList images = dir.entryList(QStringList() << "*.jpg" << "*.JPG",QDir::Files);
    foreach(QString tmp, images)
    {
//        qDebug() << tmp;
        QString img = (folderPath + "/") + tmp;  // get the file path of the picture
//        qDebug() << img;
        QListWidgetItem *imageItem = new QListWidgetItem;
        imageItem->setIcon(QIcon(img));
        imageItem->setSizeHint(QSize(120, 120));
        imageList->addItem(imageItem);
    }
    ui->gridLayout->addWidget(imageList);
//    imageList->show();
}
