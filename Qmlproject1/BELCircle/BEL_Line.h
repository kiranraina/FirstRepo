#ifndef BEL_LINE_H
#define BEL_LINE_H
#include <QQuickPaintedItem>
#include<QDebug>
#include <QPainter>

class BEL_Line : public QQuickPaintedItem
{
public:
    BEL_Line();

    // QQuickPaintedItem interface
public:
    void paint(QPainter *painter) override;
};

#endif // BEL_LINE_H
