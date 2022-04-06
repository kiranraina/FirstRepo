#include "MyAuth.h"

MyAuth::MyAuth(QObject *parent) : QObject(parent)
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

QString MyAuth::getusername() const
{
    return m_username;
}

void MyAuth::setUsername(const QString username)
{
     qDebug()<<Q_FUNC_INFO<<endl;
    emit usernameChanged();
    m_username = username;
}

QString MyAuth::getpassword() const
{
    return m_password;
}

void MyAuth::setPassword(const QString password)
{
     qDebug()<<Q_FUNC_INFO<<endl;
    emit passwordChanged();
    m_password = password;
}
