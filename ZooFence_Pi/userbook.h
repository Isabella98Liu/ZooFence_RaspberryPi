#ifndef USERBOOK_H
#define USERBOOK_H

#include <QWidget>
#include <QLabel>
#include <Qt>

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
    QLabel *returnButton;

signals:
    void return_index_3_2();

protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // USERBOOK_H
