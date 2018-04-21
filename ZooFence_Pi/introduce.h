#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QWidget>
#include <QPixmap>
#include <QImage>
#include <QIcon>
#include <QPushButton>

namespace Ui {
class introduce;
}

class introduce : public QWidget
{
    Q_OBJECT

public:
    explicit introduce(QWidget *parent = 0);
    ~introduce();

private:
    Ui::introduce *ui;
    QPushButton *button1;
    QPushButton *button2;

    void loadResource();    //load button imgs from resources
};

#endif // INTRODUCE_H
