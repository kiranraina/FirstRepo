#ifndef CAR_H
#define CAR_H
#include"Commanutiles.h"
#include"TyreModel.h"
#include"SeatModel.h"
class Car
{
    Car();
public:
    ~Car();
    void start();
    static Car* getMe();
private:
    TyreModel *m_tyremodel;
    SeatModel *m_seatmodel;
    static Car *m_car;
};

#endif // CAR_H
