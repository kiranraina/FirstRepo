#ifndef CARMANAGER_H
#define CARMANAGER_H
#include"Commanutiles.h"
#include<list>
#include<BaseVersion.h>
#include<MidVersion.h>
#include<TopVersion.h>
#include<CAR.h>
#include <fstream>
#include "string.h"

class CARMANAGER
{
    enum Version{
        BASEVERSION=1,
        MIDVERSION=2,
        TOPVERSION=3,
        DISPALY=4,
        EXIT=5
    };
public:
    CARMANAGER();
    ~CARMANAGER();
    void init();
//    void print();
    void function();
    bool userCar(string carnum);
    void insertData();
private:
    list<CAR*>m_listcar;
    list<CAR*>::iterator it;
    CAR *m_car;
//    CAR *m_midcar;
//    CAR *m_topcar;
};

#endif // CARMANAGER_H
