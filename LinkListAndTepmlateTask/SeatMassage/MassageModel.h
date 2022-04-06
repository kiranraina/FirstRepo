#ifndef MASSAGEMODEL_H
#define MASSAGEMODEL_H
#include"Commanutiles.h"
#include"MassageProgram.h"
#include"MassageRecord.h"
#include"map"
#include "vector"

enum start{OFF=1,ON};
class MassageModel
{

    MassageModel();

public:
    using Massage_ID=int;
    ~MassageModel();
    void init();

    bool startMassage();

    void print();

    bool toggleStatus(MassageRecord *mr);

    bool togglIntensity(MassageRecord *mr);

    void statusOfAllDriverSeat();
    void statusOfAllPassangerSeat();

   static MassageModel* getInstance();
private:


    map<Massage_ID,MassageProgram*>*m_MapMassageprogram;
    MassageProgram *m_program;
    map<Massage_ID,MassageProgram*>::iterator it;
    int m_positionSelect=0;
    int m_IntensitySelect=0;
    int m_flag;
    MassageRecord *m_currentSeat;

    static MassageModel *m_massageprogram;

};


#endif // MASSAGEMODEL_H
