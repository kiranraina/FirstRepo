#ifndef MASSAGEMODEL_H
#define MASSAGEMODEL_H
#include "MassageRecord.h"
#include "MassageProgram.h"
#include "list"
#include <iostream>
#include "map"
#include "vector"
using namespace std;
enum start{OFF=1,ON};
class MassageModel
{
    MassageModel();
public:
    using MASSAGE_ID = int;
    ~MassageModel();

    bool toggleStatus(MassageRecord *massageR);
    void toggleIntensity(MassageRecord *massageR);

    void init();
    void displayMassageProgramList();
    void start();

    void statusOfAllDriverSeat();
    void statusOfAllPassangerSeat();

    void intensityOfAllDriverSeat();
    void intensityOfAllPassangerSeat();

    static MassageModel *getInstance();


private:
    map<MASSAGE_ID,MassageProgram*> *m_progrogramMap;
    map<MASSAGE_ID,MassageProgram*>::iterator it;
    MassageProgram *m_massageProgram;
    MassageRecord *m_currentSeat;
    int intensity=0;
    int spositon=0;
    int startStop;
    static MassageModel* m_massageModel;
};

#endif // MASSAGEMODEL_H

