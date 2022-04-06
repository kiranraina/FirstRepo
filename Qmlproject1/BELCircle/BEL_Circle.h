#ifndef BEL_CIRCLE_H
#define BEL_CIRCLE_H
#include <QQuickPaintedItem>
#include<QDebug>
#include <QPainter>

class BEL_Circle : public QQuickPaintedItem
{
public:
    BEL_Circle();

    // QQuickPaintedItem interface
public:
    void paint(QPainter *painter) override;
};

#endif // BEL_CIRCLE_H
