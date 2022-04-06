#include "MassageProgram.h"

MassageProgram::MassageProgram()
{
    cout << " Massage Program constructed " << endl;
    m_leftSeat= new MassageRecord;
    m_rightSeat =new MassageRecord;
    massageNames=new vector<string>;
    massageNames->reserve(10);
    massageNames->push_back("Classic Massage");
    massageNames->push_back("Relaxing Massage");
    massageNames->push_back("Mobilizing Massage");
    massageNames->push_back("Activating Massage");
    massageNames->push_back("Hot relaxing back Massage");
    massageNames->push_back("Wave Massage");
    massageNames->push_back("Calf Massage");
    massageNames->push_back("Deep Workout Massage");
    massageNames->push_back("Workout cushion Massage");
    massageNames->push_back("Workout back Massage");
}

MassageProgram::~MassageProgram()
{
    cout << " Massage Program destroyed " << endl;
}

void MassageProgram::init(){

}

void MassageProgram::print(){

}

void MassageProgram::setMassageName(const string name){
    m_massageName = name;
}
string MassageProgram::getMassageName() const{
    return m_massageName;
}

MassageRecord *MassageProgram::getLeftSeat() const
{
    return m_leftSeat;
}

void MassageProgram::setLeftSeat(MassageRecord *LeftSeat)
{
    m_leftSeat = LeftSeat;
}

MassageRecord *MassageProgram::getRightSeat() const
{
    return m_rightSeat;
}

void MassageProgram::setRightSeat(MassageRecord *RightSeat)
{
    m_rightSeat = RightSeat;
}

int MassageProgram::getId() const
{
    return m_id;
}

void MassageProgram::setId(int id)
{
    m_id = id;
}

