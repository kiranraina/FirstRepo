#ifndef CAR_H
#define CAR_H
#include<QDebug>
#include <QObject>

class Car : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString carName READ getname() WRITE setName NOTIFY carNameChanged)
    Q_PROPERTY(QString carColor READ getcolor() WRITE setColor NOTIFY carColorChanged)
    Q_PROPERTY(QString carNumber READ getnumber() WRITE setNumber NOTIFY carNumberChanged)
public:
    explicit Car(QObject *parent = 0);
   ~Car();
    void init ();
    void print();
    QString getname() const;
    void setName(const QString name);

    QString getcolor() const;
    void setColor(const QString color);

    QString getnumber() const;
    void setNumber(const QString number);

private:
    QString m_name;
    QString m_color;
    QString m_number;
signals:
    void carNumberChanged();
    void carNameChanged();
    void carColorChanged();


public slots:
};

#endif // CAR_H
