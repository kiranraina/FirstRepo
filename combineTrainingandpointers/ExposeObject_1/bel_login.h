#ifndef BEL_LOGIN_H
#define BEL_LOGIN_H

#include <QObject>
#include <QList>
#include<User.h>
 
class BEL_Login : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getUser WRITE setUser NOTIFY nameChanged);
     Q_PROPERTY(QString password READ getPass WRITE setPass NOTIFY passwordChanged);
public:
    explicit BEL_Login(QObject *parent = nullptr);

  Q_INVOKABLE void display();
    QString getUser() const;
    void setUser(const QString &user);

    QString getPass() const;
    void setPass(const QString &pass);
    Q_INVOKABLE User *getMyUser(){
        User *u=new User;
        u->setUsn("1234");
        u->setName("akashkumar");
        return u;
    }



public slots:
     QList<QObject *> getUsers() const;
    void verify(QString us, QString pas);


signals:
    void nameChanged();
    void passwordChanged();

private:
    QString m_user;
    QString m_pass;

QList<QObject*>m_users;
};

#endif // BEL_LOGIN_H
