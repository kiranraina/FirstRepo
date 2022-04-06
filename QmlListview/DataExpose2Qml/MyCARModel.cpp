#include "MyCARModel.h"

MyCARModel::MyCARModel(QObject *parent) : QObject(parent)
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
MyCARModel::~MyCARModel()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

QString MyCARModel::getcarname() const
{
     qDebug()<<Q_FUNC_INFO<<endl;
    return m_carname;
}

void MyCARModel::setCarname(const QString carname)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_carname = carname;
    emit carnameChanged();
}

void MyCARModel::print()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}
