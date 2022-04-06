#ifndef CARMODEL_H
#define CARMODEL_H
#include<Car.h>
#include <QObject>

class CarModel : public QObject
{
    Q_OBJECT
public:
    explicit CarModel(QObject *parent = 0);

    ~CarModel();
      void init();
//     void init(Car *ptr);
     void print();
    Q_INVOKABLE Car* getFunction(int x);
private:
    std::list<Car *>m_carlist;
signals:

public slots:
};

#endif // CARMODEL_H
