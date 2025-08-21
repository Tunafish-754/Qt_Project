#include "mycombobox.h"

MyComboBox::MyComboBox(QWidget *parent) : QComboBox(parent)
{


}

void MyComboBox::mousePressEvent(QMouseEvent *event)
{
    emit refreshIP();
    QComboBox::mousePressEvent(event);
}
