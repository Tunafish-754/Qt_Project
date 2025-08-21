#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
public:
    MyTextEdit();

protected:
    void wheelEvent(QWheelEvent *event) override;


};

#endif // MYTEXTEDIT_H
