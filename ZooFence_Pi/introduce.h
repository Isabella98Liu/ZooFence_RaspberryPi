#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QWidget>

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
};

#endif // INTRODUCE_H
