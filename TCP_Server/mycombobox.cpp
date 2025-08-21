#include "mycombobox.h"

MyComboBox::MyComboBox(QWidget *parent) : QComboBox(parent)
{

}

void MyComboBox::mousePressEvent(QMouseEvent *event)
{
    emit my_comboBox_pressed();
    QComboBox::mousePressEvent(event);
}
