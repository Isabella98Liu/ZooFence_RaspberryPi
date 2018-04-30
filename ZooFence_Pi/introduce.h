#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QWidget>
#include <QPixmap>
#include <QImage>
#include <QIcon>
#include <QLabel>
#include <QPushButton>
#include <QDesktopWidget>

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
    QLabel *textLabel;

    void loadResource();    //load button imgs from resources

signals:
    void switch_index_2_3();  //switch page from [introduce] to [userbook]
    void switch_index_2_4();  //switch page from [introduce] to [login]

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // INTRODUCE_H
