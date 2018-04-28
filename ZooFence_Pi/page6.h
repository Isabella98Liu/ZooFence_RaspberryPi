#ifndef PAGE6_H
#define PAGE6_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>
#include <QImage>
#include <QLabel>
#include <QPushButton>
#include <QDateEdit>

#include <QFileDialog>
#include <QPixmap>
#include <QListWidget>
#include <QString>
#include <QDir>
#include <QSize>

namespace Ui {
class page6;
}

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
    QString folderPath;
    void showImageList();
};

#endif // PAGE6_H
