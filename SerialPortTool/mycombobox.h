#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>
#include <QObject>
#include <QWidget>

class MyComboBox : public QComboBox
{
    Q_OBJECT
public:
    MyComboBox(QWidget *parent);

protected:
    void mousePressEvent(QMouseEvent *event);

signals:
    void refresh();

};

#endif // MYCOMBOBOX_H
