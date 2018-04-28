#ifndef PAGE8_H
#define PAGE8_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>
#include <QImage>
#include <QLabel>
#include <QPushButton>


namespace Ui {
class page8;
}

class page8 : public QWidget
{
    Q_OBJECT

public:
    explicit page8(QWidget *parent = 0);
    ~page8();
    QLabel *pictureLabel;

private:
    Ui::page8 *ui;
    QPushButton *smallbutton;
    QPushButton *bigbutton;
    QLabel *returnbutton;

};

#endif // PAGE8_H
