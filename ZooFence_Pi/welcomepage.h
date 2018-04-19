#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QImage>
#include <QPixmap>

class welcomePage : public QWidget
{
    Q_OBJECT

public:
    welcomePage(QWidget *parent = 0);
    ~welcomePage();
    void loadPic();

private:
    QGraphicsScene *scene;
    QGraphicsView *view;
    QPixmap pix_Pic;
    QImage Pic;

};

#endif // WELCOMEPAGE_H
