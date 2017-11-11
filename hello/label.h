#ifndef LABEL_H
#define LABEL_H
#include <QLabel>

class MyLabel : public QLabel
{
    Q_OBJECT

    QString qsContext[2] = {"Hello World","Hello Qt"};
    uint c=0;
public:
    MyLabel(const QString& text,QWidget *parent):QLabel(text,parent){}
public slots:
    void changeText()
    {
        setText(qsContext[c]);
        c=~c&0x1;
    }
};


#endif // LABEL_H
