#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>
#include <QWidget>

class MyComboBox : public QComboBox
{
    Q_OBJECT
public:
    MyComboBox(QWidget *parent);

protected:
    void mousePressEvent(QMouseEvent *event) override;

signals:
    void my_comboBox_pressed();

};

#endif // MYCOMBOBOX_H
