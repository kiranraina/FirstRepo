#ifndef MASSAGEPROGRAM_H
#define MASSAGEPROGRAM_H
#include <iostream>
#include "MassageRecord.h"
#include "vector"

using namespace std;
class MassageModel;
class MassageProgram
{
public:
    MassageProgram();

    void init();
    void print();
    ~MassageProgram();

    string getMassageName() const;
    void setMassageName(const string name);


    MassageRecord *getLeftSeat() const;
    void setLeftSeat(MassageRecord *LeftSeat);

    MassageRecord *getRightSeat() const;
    void setRightSeat(MassageRecord *RightSeat);

    int getId() const;
    void setId(int id);

    vector<string>*massageNames;
    vector<string>::iterator It;

private:
    int m_id;
    MassageRecord *m_leftSeat;
    MassageRecord *m_rightSeat;
   string m_massageName;

};

#endif // MASSAGEPROGRAM_H
