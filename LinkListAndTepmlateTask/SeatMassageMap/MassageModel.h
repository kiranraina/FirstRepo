#ifndef MASSAGEMODEL_H
#define MASSAGEMODEL_H
#include"Commanutiles.h"
#include"MassageProgram.h"
#include"MassageRecord.h"
#include"map"

class MassageModel
{
    enum massageType{
        Classic=1,
        Relaxing,
        Mobilizng,
        Activating,
        HotRelaxingBack,
        HotRelaxingShoulder,
        Wave,
        calf,
        DeepWaves,
        DeepWorkout
    };
    using Massage_ID=int;
    MassageModel();

public:
    ~MassageModel();
    void init();

    bool startMassage();

    void print();

    bool toggleStatus(MassageRecord *mRecord);

    bool togglIntensity(MassageRecord *mRecord);

    static MassageModel* getInstance();
    map<Massage_ID,MassageProgram*>::iterator it;
    map<Massage_ID,MassageProgram*>*m_MapMassageprogram;
private:
    static MassageModel *m_massageprogram;
    static int count;

    MassageProgram *m_program;
    int m_massageSelect;
    int m_inten;
    MassageRecord *m_record;
    int m_seatIntensity;
};


#endif // MASSAGEMODEL_H
