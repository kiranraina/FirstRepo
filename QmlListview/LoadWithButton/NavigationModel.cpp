#include "NavigationModel.h"


NavigationModel::NavigationModel(QObject *parent) : QObject(parent)
{
   qDebug()<<Q_FUNC_INFO<<endl;
}
void NavigationModel::callMe()
{
     qDebug()<<Q_FUNC_INFO<<endl;
     emit loadNext("Page1.qml");
}
