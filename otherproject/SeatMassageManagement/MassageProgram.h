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
    ~MassageProgram();

    string getMassageName() const;
    void setMassageName(const string &massageName);

    MassageRecord *getLeftSeat() const;
    void setLeftSeat(MassageRecord *leftSeat);

    MassageRecord *getRightSeat() const;
    void setRightSeat(MassageRecord *rightSeat);

    int getId() const;
    void setId(int id);

    vector<string> *m_massageNames;
    vector<string>:: iterator it1;

private:
    MassageRecord *m_leftSeat;
    MassageRecord *m_rightSeat;
    string m_massageName;
    int m_id;


};

#endif // MASSAGEPROGRAM_H
