#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>
#include <QMovie>

namespace Ui {
class welcomePage;
}

class welcomePage : public QWidget
{
    Q_OBJECT

public:
    explicit welcomePage(QWidget *parent = 0);
    ~welcomePage();
    void loadGif();

private:
    Ui::welcomePage *ui;
    QMovie *loading;
};

#endif // WELCOMEPAGE_H
