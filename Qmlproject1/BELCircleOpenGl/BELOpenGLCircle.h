#ifndef BELOPENGLCIRCLE_H
#define BELOPENGLCIRCLE_H

#include <QQuickItem>
#include <QDebug>
#include <QSGGeometryNode>
#include <QSGGeometry>
#include <QSGMaterial>
#include <QSGFlatColorMaterial>

class BELOpenGLCircle : public QQuickItem
{
    Q_OBJECT
public:
    BELOpenGLCircle();

signals:

public slots:

    // QQuickItem interface
protected:
    QSGNode *updatePaintNode(QSGNode *, UpdatePaintNodeData *) override;
private:
    QSGGeometry m_gem;
    QSGFlatColorMaterial m_mat;
};

#endif // BELOPENGLCIRCLE_H
