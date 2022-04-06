#include "ScreenProperties.h"

ScreenProperties::ScreenProperties(QObject *parent) : QObject(parent)
{
   qDebug()<<Q_FUNC_INFO<<endl;
}

int ScreenProperties::width() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_width;
}

void ScreenProperties::setWidth(int newWidth)
{
    m_width = newWidth;
}

void ScreenProperties::display()
{
       qDebug()<<Q_FUNC_INFO<<endl;
}

int ScreenProperties::height() const
{
    return m_height;
}

void ScreenProperties::setHeight(int newHeight)
{
    m_height = newHeight;
}
