#ifndef PAGE6_H
#define PAGE6_H

#include <QWidget>
#include <QIcon>
#include <QPixmap>
#include <QImage>
#include <QLabel>
#include <QPushButton>
#include <QDateEdit>
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
    QPushButton *returnButton;
    QDateEdit *dateEdit;

signals:
    void return_index_6_5();
private slots:
    void on_pushButton_2_clicked();
};

#endif // PAGE6_H
