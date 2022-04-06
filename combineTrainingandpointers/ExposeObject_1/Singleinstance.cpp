#include "Singleinstance.h"

SingleInstance::SingleInstance(QObject *parent) : QObject(parent)
{
  qDebug()<<"singleinstance"<<endl;
}

QColor SingleInstance::fontColor() const
{
    return m_fontColor;
}

void SingleInstance::setFontColor(const QColor &fontColor)
{
    m_fontColor = fontColor;
}
