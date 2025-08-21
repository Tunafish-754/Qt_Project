#include "mytextedit.h"
#include "widget.h"

MyTextEdit::MyTextEdit(QWidget *parent)
{


}

void MyTextEdit::wheelEvent(QWheelEvent *event)
{
    QPoint point = event->angleDelta();
    int index = point.y();
    if(ctrl_pressed == 1){
        if(index > 0){
            zoomIn();
        }
        else if(index < 0){
            zoomOut();
        }
    }
    else{
        QTextEdit::wheelEvent(event);//调用父控件，原本怎么处理怎么处理
    }
}

void MyTextEdit::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Control){
        ctrl_pressed = 1;
    }

}

void MyTextEdit::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Control){
        ctrl_pressed = 0;
    }
}
