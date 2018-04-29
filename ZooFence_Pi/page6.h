#ifndef PAGE6_H
#define PAGE6_H

#include <QWidget>
#include <QObject>
#include <QIcon>
#include <QPixmap>
#include <QImage>
#include <QLabel>
#include <QPushButton>
#include <QDateEdit>
#include <QComboBox>
#include <QRegExp>

#include <QFileDialog>
#include <QPixmap>
#include <QListWidget>
#include <QListWidgetItem>
#include <QString>
#include <QDir>
#include <QSize>

#include "page8.h"

namespace Ui {
class page6;
}

class searchIndex
{
public:
    int year;
    int month;
    int day;
    int trigger_type;
};

class page6 : public QWidget
{
    Q_OBJECT

public:
    explicit page6(QWidget *parent = 0);
    ~page6();

private:
    Ui::page6 *ui;
    QPushButton *searchButton;
    QDateEdit *dateEdit;
    QComboBox *trigger;
    QString folderPath;
    QListWidget *imageList;
    void showImageList();
    searchIndex imageInfo(QString);

private slots:
    void imageDetail(QListWidgetItem*);   // show data detail
    void on_pushButton_clicked(); // search specific image
};

#endif // PAGE6_H
