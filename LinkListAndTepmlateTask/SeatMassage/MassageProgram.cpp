#include "MassageProgram.h"

MassageProgram::MassageProgram()
{
  cout<<"MassageProgram constructor called"<<endl;
  m_LeftSeat = new MassageRecord;
  m_RightSeat = new MassageRecord;
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
    cout<<"MassageProgram destructor called"<<endl;
}

void MassageProgram::init()
{
    cout<<"MassageProgram init called"<<endl;
}

void MassageProgram::print()
{
     cout<<"MassageProgram print called"<<endl;
}

string MassageProgram::getMassageName() const
{
      cout<<"MassageProgram getMassageName called"<<endl;
    return MassageName;

}

void MassageProgram::setMassageName(const string name)
{
    cout<<"MassageProgram setMassageName called"<<endl;
    MassageName = name;
}

MassageRecord *MassageProgram::getLeftSeat() const
{
     cout<<"MassageProgram getLeftSeat called"<<endl;
    return m_LeftSeat;
}

void MassageProgram::setLeftSeat(MassageRecord *LeftSeat)
{
    cout<<"MassageProgram setLeftSeat called"<<endl;
   m_LeftSeat = LeftSeat;
}

MassageRecord *MassageProgram::getRightSeat() const
{
    cout<<"MassageProgram getRightSeat called"<<endl;
    return m_RightSeat;
}

void MassageProgram::setRightSeat(MassageRecord *RightSeat)
{
    cout<<"MassageProgram setRightSeat called"<<endl;
    m_RightSeat = RightSeat;
}

int MassageProgram::getId() const
{
     cout<<"MassageProgram getId called"<<endl;
    return m_id;
}

void MassageProgram::setId(int id)
{
    cout<<"MassageProgram setId called"<<endl;
    m_id = id;
}
