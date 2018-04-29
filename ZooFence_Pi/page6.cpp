#include "page6.h"
#include "ui_page6.h"

page6::page6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page6)
{
    ui->setupUi(this);
    folderPath = qApp->applicationDirPath() +  QString("/pics");
    dateEdit = ui->dateEdit;
    dateEdit->setCalendarPopup(true);
    searchButton = ui->pushButton;
    trigger = ui->comboBox;
    searchButton->setObjectName("searchButton");
    imageList = new QListWidget;   // create a qlistwidget to show the image list
    showImageList();
    connect(imageList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(imageDetail(QListWidgetItem*)));
}

page6::~page6()
{
    delete ui;
}


void page6::showImageList()  // show the initial image list in the window
{
//------------------------------------------
    imageList->resize(500, 500);
    imageList->setViewMode(QListView::IconMode);
    imageList->setIconSize(QSize(120, 120));
    imageList->setSpacing(5);
    imageList->setResizeMode(QListWidget::Adjust);
    imageList->setMovement(QListWidget::Static);
//------------------------------------------
    QDir dir(folderPath);  // get the directory of the folder
    QStringList images = dir.entryList(QStringList() << "*.jpg" << "*.JPG",QDir::Files);
    foreach(QString tmp, images)
    {
        QString img = (folderPath + "/") + tmp;  // get the file path of the picture
        QListWidgetItem *imageItem = new QListWidgetItem;
        imageItem->setIcon(QIcon(img));
        imageItem->setSizeHint(QSize(120, 120));
        imageItem->setText(tmp);
        imageList->addItem(imageItem);
    }
    ui->gridLayout->addWidget(imageList);
}


//------------------------------------SLOT---------------------------------------

void page6::imageDetail(QListWidgetItem* item)
{
    page8 *p8 = new page8;
    p8->show();
    p8->setInfo(item);
    p8->pictureLabel->setPixmap(item->icon().pixmap(QSize(400, 400)));
}


void page6::on_pushButton_clicked()
{
    searchIndex search;
    //delete the current widget
    if(imageList->count())
    {
        int count = imageList->count();
        for(int i = 0; i < count; i++)
        {
            imageList->takeItem(0);
        }
    }
    //get the selected date data from calender
    search.year = dateEdit->date().year();
    search.month  = dateEdit->date().month();
    search.day = dateEdit->date().day();
    //get the selected trigger type from comobox
    search.trigger_type = trigger->currentIndex();
    // filter
    QDir dir(folderPath);
    QStringList images = dir.entryList(QStringList() , QDir::Files);
    if(images.count() > 0 )
    {
        searchIndex info;
        foreach(QString tmp, images)
        {
            info = info.imageInfo(tmp);
            // if the item match search info, then add it from list widget
            if(info.year == search.year && info.month == search.month && info.day == search.day && (info.trigger_type == search.trigger_type || search.trigger_type == 0) )
              {
                QString img = (folderPath + "/") + tmp;  // get the file path of the picture
                QListWidgetItem *imageItem = new QListWidgetItem;
                imageItem->setIcon(QIcon(img));
                imageItem->setSizeHint(QSize(120, 120));
                imageItem->setText(tmp);
                imageList->addItem(imageItem);
            }
        }
    }
}

