#include "MySeat.h"

MySeat::MySeat()
{

}

int MySeat::shoulder() const
{
    return m_shoulder;
}

void MySeat::setShoulder(int shoulder)
{
    m_shoulder = shoulder;
}

int MySeat::position() const
{
    return m_position;
}

void MySeat::setPosition(int position)
{
    m_position = position;
}

int MySeat::bolster() const
{
    return m_bolster;
}

void MySeat::setBolster(int bolster)
{
    m_bolster = bolster;
}

QString MySeat::image() const
{
    return m_image;
}

void MySeat::setImage(const QString image)
{
    m_image = image;
}
