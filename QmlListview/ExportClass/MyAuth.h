#ifndef MYAUTH_H
#define MYAUTH_H
#include<QDebug>
#include <QObject>

class MyAuth : public QObject
{
    Q_OBJECT\
    Q_PROPERTY(QString username READ getusername WRITE setUsername NOTIFY usernameChanged)
    Q_PROPERTY(QString pass READ getpassword WRITE setPassword NOTIFY passwordChanged)
public:
    explicit MyAuth(QObject *parent = 0);

    QString getusername() const;
    void setUsername(const QString username);

    QString getpassword() const;
    void setPassword(const QString password);

signals:
    void usernameChanged();
    void passwordChanged();

public slots:
private:
    QString m_username;
    QString m_password;
};

#endif // MYAUTH_H
