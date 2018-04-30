#ifndef PAGE7_H
#define PAGE7_H

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class page7;
}

class page7 : public QWidget
{
    Q_OBJECT

public:
    explicit page7(QWidget *parent = 0);
    ~page7();

private:
    Ui::page7 *ui;
};

#endif // PAGE7_H
