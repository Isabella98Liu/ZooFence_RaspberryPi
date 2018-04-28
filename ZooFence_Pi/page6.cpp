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

    imageList = new QListWidget;   // create a qlistwidget to show the image list
    showImageList();
    connect(imageList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(imageDetail(QListWidgetItem*)));
}

page6::~page6()
{
    delete ui;
}


void page6::showImageList()
{
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
}

//------------------------------------SLOT---------------------------------------

void page6::imageDetail(QListWidgetItem* item)
{
    page8 *p8 = new page8;
    p8->show();
    p8->pictureLabel->setPixmap(item->icon().pixmap(QSize(400, 400)));
}
