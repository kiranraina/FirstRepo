#include "MassageProgram.h"
#include "MassageModel.h"
MassageProgram::MassageProgram()
{
    cout << "MassageProgram Constructor" << endl;
    m_leftSeat = new MassageRecord;
    m_rightSeat = new MassageRecord;
    m_massageNames=new vector<string>;
    m_massageNames->reserve(10);
    m_massageNames->push_back("Classic Massage");
    m_massageNames->push_back("Relaxing Massage");
    m_massageNames->push_back("Mobilizing Massage");
    m_massageNames->push_back("Activating Massage");
    m_massageNames->push_back("Hot relaxing back Massage");
    m_massageNames->push_back("Wave Massage");
    m_massageNames->push_back("Calf Massage");
    m_massageNames->push_back("Deep Workout Massage");
    m_massageNames->push_back("Workout cushion Massage");
    m_massageNames->push_back("Workout back Massage");
}

MassageProgram::~MassageProgram()
{
    cout << "MassageProgram Destructor" << endl;
}

string MassageProgram::getMassageName() const
{
    return m_massageName;
}

void MassageProgram::setMassageName(const string &massageName)
{
    m_massageName = massageName;
}


MassageRecord *MassageProgram::getLeftSeat() const
{
    return m_leftSeat;
}

void MassageProgram::setLeftSeat(MassageRecord *leftSeat)
{
    m_leftSeat = leftSeat;
}

MassageRecord *MassageProgram::getRightSeat() const
{
    return m_rightSeat;
}

void MassageProgram::setRightSeat(MassageRecord *rightSeat)
{
    m_rightSeat = rightSeat;
}

int MassageProgram::getId() const
{
    return m_id;
}

void MassageProgram::setId(int id)
{
    m_id = id;
}
