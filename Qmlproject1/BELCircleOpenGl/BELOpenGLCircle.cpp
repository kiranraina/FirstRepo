#include "BELOpenGLCircle.h"

BELOpenGLCircle::BELOpenGLCircle():
    m_gem(QSGGeometry::defaultAttributes_Point2D(),3)
{
  qDebug()<<Q_FUNC_INFO<<endl;
  m_mat.setColor(Qt::yellow);
  setFlag(ItemHasContents);
}
QSGNode *BELOpenGLCircle::updatePaintNode(QSGNode *n, UpdatePaintNodeData *){
    qDebug()<<Q_FUNC_INFO<<endl;
    QSGGeometryNode *n1 =static_cast<QSGGeometryNode*>(n);
    if(n==nullptr){
       qDebug()<<"It id null object"<<endl;
       n1= new QSGGeometryNode();
    }
    QRectF r=boundingRect();
    QSGGeometry::Point2D* vertices =m_gem.vertexDataAsPoint2D();
    vertices[0].x =100;
    vertices[0].y =10;

    vertices[1].x =10;
    vertices[1].y =100;

    vertices[2].x=150;
    vertices[2].y=100;

    n1->setGeometry(&m_gem);
    n1->setMaterial(&m_mat);
    return n1;
}
