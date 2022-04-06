#ifndef MASSAGEPROGRAM_H
#define MASSAGEPROGRAM_H
#include"Commanutiles.h"
#include"MassageRecord.h"
#include "vector"
class MassageModel;
class MassageProgram
{
public:
    MassageProgram();
    ~ MassageProgram();

    void init();
    void print();

    void setMassageName(const string name);
    string getMassageName() const;

    MassageRecord *getLeftSeat() const;
    void setLeftSeat(MassageRecord *LeftSeat);

    MassageRecord *getRightSeat() const;
    void setRightSeat(MassageRecord *RightSeat);

    int getId() const;
    void setId(int id);

    vector<string> *m_massageNames;
    vector<string>:: iterator it1;
private:
    int m_id;
    string MassageName;
    string HeaderText;
    MassageRecord *m_LeftSeat;
     MassageRecord *m_RightSeat;

};

#endif // MASSAGEPROGRAM_H
