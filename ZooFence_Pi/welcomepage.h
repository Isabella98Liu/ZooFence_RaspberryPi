#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>
#include <QMovie>
#include <QLabel>
#include <QTimer>
#include <QString>


namespace Ui {
class welcomePage;
}

class welcomePage : public QWidget
{
    Q_OBJECT

public:
    explicit welcomePage(QWidget *parent = 0);
    ~welcomePage();
    void loadGif();   // load the loading gif animation
    void loadText();   // animated the switch of the text content
    void loadContent();  // load the content of the text

private:
    int textIndex = 0;  // the current index of the animated text content
    int textNum = 4;  // the number of text that you want to input
    QString textContent[4];  // the content of the text label
    Ui::welcomePage *ui;
    QMovie *loading;
    QLabel *Text;
    QTimer *timer1;

signals:
    void switch_index_1_2();

private slots:
    void textUpdate();

};

#endif // WELCOMEPAGE_H
