#ifndef USERBOOK_H
#define USERBOOK_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <Qt>
#include <QDesktopWidget>

namespace Ui {
class userBook;
}

class userBook : public QWidget
{
    Q_OBJECT

public:
    explicit userBook(QWidget *parent = 0);
    ~userBook();

private:
    Ui::userBook *ui;
    QPushButton *returnButton;

signals:
    void return_index_3_2();

private slots:
    void on_pushButton_clicked();
};

#endif // USERBOOK_H
