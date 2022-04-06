#ifndef BEL_ELLIPSE_H
#define BEL_ELLIPSE_H
#include <QQuickPaintedItem>
#include<QDebug>
#include <QPainter>

class BEL_Ellipse : public QQuickPaintedItem
{
public:
    BEL_Ellipse();

    // QQuickPaintedItem interface
public:
    void paint(QPainter *painter) override;
};

#endif // BEL_ELLIPSE_H
