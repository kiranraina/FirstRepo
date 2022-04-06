#ifndef SCREENPROPERTIES_H
#define SCREENPROPERTIES_H
#include<QDebug>
#include <QObject>

class ScreenProperties : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int myWidth READ width WRITE setWidth)
    Q_PROPERTY(int myHeight READ height WRITE setHeight)

public:
    explicit ScreenProperties(QObject *parent = nullptr);
public slots:
    int width() const;
    void setWidth(int newWidth);
    void display();
    int height() const;
    void setHeight(int newHeight);

signals:

private:
    int m_width = 10;
    int m_height = 10;

};

#endif // SCREENPROPERTIES_H
