#include "DisplayManager.h"

DisplayManager::DisplayManager(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void DisplayManager::loginSucces()
{
      qDebug()<<Q_FUNC_INFO<<"Login success"<<endl;
}
void DisplayManager::loginFail()
{
      qDebug()<<Q_FUNC_INFO<<"Login failed"<<endl;
}

