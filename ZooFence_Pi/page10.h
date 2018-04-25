#ifndef PAGE10_H
#define PAGE10_H

#include <QWidget>

namespace Ui {
class page10;
}

class page10 : public QWidget
{
    Q_OBJECT

public:
    explicit page10(QWidget *parent = 0);
    ~page10();

private:
    Ui::page10 *ui;
};

#endif // PAGE10_H
