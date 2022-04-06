#ifndef USER_H
#define USER_H

#include <QObject>

class User : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString usn READ usn WRITE setUsn NOTIFY usnChanged)
public:
    explicit User(QObject *parent = nullptr);

    QString usn() const;
    void setUsn(const QString &usn);

    QString name() const;
    void setName(const QString &name);

    QString phone() const;
    void setPhone(const QString &phone);

    QString email() const;
    void setEmail(const QString &email);

signals:
    void usnChanged();

private:
    QString m_usn;
    QString m_name;
    QString m_phone;
    QString m_email;


};

#endif // USER_H
