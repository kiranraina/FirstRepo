#include "bel_login.h"
#include <QDebug>

BEL_Login::BEL_Login(QObject *parent) : QObject(parent)
{
   for(int i=0;i<10;i++){
       QString num = QString::number(1000+i);
       QString name="siva_"+num;
       User *u = new User;
       u->setName(name);
       u->setUsn(name);
       m_users.append(u);
   }
}

void BEL_Login::display()
{
    qDebug()<<"Q_FUNC_INFO"<<Qt::endl;
}

void BEL_Login::verify(QString us, QString pas)
{
    qDebug()<<Q_FUNC_INFO<<us<<"pass="<<pas<<endl;
}

QList<QObject *> BEL_Login::getUsers() const
{
    return m_users;
}

QString BEL_Login::getPass() const
{
    return m_pass;
}

void BEL_Login::setPass(const QString &pass)
{
    if(m_pass ==pass)return;
    m_pass = pass;
    emit passwordChanged();
}

QString BEL_Login::getUser() const
{
    return m_user;
}

void BEL_Login::setUser(const QString &user)
{
    qDebug()<<Q_FUNC_INFO<<user<<endl;
    if(m_user==user)return;
     m_user = user;
     emit nameChanged();
}
