#ifndef ALERTPAGE9_H
#define ALERTPAGE9_H

#include <QWidget>

namespace Ui {
class alertPage9;
}

class alertPage9 : public QWidget
{
    Q_OBJECT

public:
    explicit alertPage9(QWidget *parent = 0);
    ~alertPage9();

private:
    Ui::alertPage9 *ui;
};

#endif // ALERTPAGE9_H
