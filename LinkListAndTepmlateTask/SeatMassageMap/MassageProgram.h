#ifndef MASSAGEPROGRAM_H
#define MASSAGEPROGRAM_H
#include"Commanutiles.h"
#include"MassageRecord.h"
#include"map"
class MassageModel;
class MassageProgram
{
    using Massage_ID=int;
    enum seats{
        Leftseat=1,
        Rightseat,
    };
public:
    MassageProgram();
    ~ MassageProgram();
    void init(MassageModel *model);
//    void Massage(MassageModel *model1);
    void print();

    void setMassageName(const string name);
    string getMassageName() const;

    MassageRecord *getLeftSeat() const;
    void setLeftSeat(MassageRecord *LeftSeat);

    MassageRecord *getRightSeat() const;
    void setRightSeat(MassageRecord *RightSeat);

    int getMassage_id() const;
    void setMassage_id(const int value);

    map<Massage_ID,MassageProgram*>::iterator it;
    map<Massage_ID,MassageProgram*>*m_MapMassageprogram;
private:
    string MassageName;
    int Massage_id;
    int m_select;
    MassageRecord *m_LeftSeat;
    MassageRecord *m_RightSeat;

};

#endif // MASSAGEPROGRAM_H
