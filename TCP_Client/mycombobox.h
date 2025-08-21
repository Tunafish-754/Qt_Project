#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>
#include <QWidget>

class MyComboBox : public QComboBox
{
    Q_OBJECT

public:
    MyComboBox(QWidget *parent);

    void mousePressEvent(QMouseEvent *event) override;

signals:
    void refreshIP();

};

#endif // MYCOMBOBOX_H
