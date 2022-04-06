#include "BEL_Ellipse.h"

BEL_Ellipse::BEL_Ellipse()
{
qDebug()<<Q_FUNC_INFO<<endl;
}
void BEL_Ellipse::paint(QPainter *painter){
    QRectF r2(0,0,200,100);//x,y,width,height
    painter->setBrush(Qt::yellow);
    painter->drawRect(r2);

    QRect r(0,0,100,50);//x,y,width,height
    painter->setBrush(Qt::blue);
    painter->drawEllipse(r);
}
