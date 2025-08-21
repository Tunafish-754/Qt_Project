#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QTextEdit>
#include <QWidget>
#include <QWheelEvent>
#include <QDebug>
#include <QPoint>

class MyTextEdit : public QTextEdit
{
public:
    MyTextEdit(QWidget *parent);

protected:
    void wheelEvent(QWheelEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

private:
    bool ctrl_pressed = 0;
};

#endif // MYTEXTEDIT_H
