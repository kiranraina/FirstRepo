#ifndef MASSAGEMODEL_H
#define MASSAGEMODEL_H
#include <iostream>
#include "MassageRecord.h"
#include <list>
#include "MassageProgram.h"
#include <map>
#include "vector"
class MassageModel
{
    enum start{OFF=1,ON};
    MassageModel();
public:
   using MASSAGE_ID = int;
    static MassageModel *getMe();

    void init();

    void start();

    void print();

    void toggleStatus(MassageRecord *rec);
    void toggleIntensity(MassageRecord *rec);

    ~MassageModel();


    void statusOfAllDriverSeat();
    void statusOfAllPassangerSeat();

private:
    static MassageModel *msgModelSingle;
//    list<MassageProgram> listMassageProgram;
    map<MASSAGE_ID,MassageProgram*> *m_getMap;
     map<MASSAGE_ID,MassageProgram*>::iterator it;
    MassageProgram *m_massageProgram;
    MassageRecord *m_currentseat;
    int m_flag;
    int m_seatChoice=0;
    int m_seatIntensity=0;


};

#endif // MASSAGEMODEL_H
