#include "MassageProgram.h"
#include"MassageModel.h"

MassageProgram::MassageProgram()
{
    cout<<"MassageProgram constructor called"<<endl;
     m_LeftSeat=new MassageRecord;
          m_RightSeat=new MassageRecord;
//    m_RightSeat=nullptr;
//    m_LeftSeat=nullptr;
}
MassageProgram::~MassageProgram()
{
    cout<<"MassageProgram destructor called"<<endl;
}
//void MassageProgram::Massage(MassageModel *model1)
//{
//    model1->togglIntensity(m_RightSeat);
//}
void MassageProgram::init(MassageModel *model)
{
    cout<<"MassageProgram init called"<<endl;
    cout<<"Enter which seat you want"<<endl;
    cout<<"1.Driver Seat\n2.Passenger \n"<<endl;
    cin>>m_select;
    switch(m_select)
    {
    case Leftseat:{      
        m_LeftSeat->setSeatPosition(1);
        model->toggleStatus(m_LeftSeat);
        model->togglIntensity(m_LeftSeat);
        break;
    }
    case Rightseat:{
        m_RightSeat->setSeatPosition(2);
        model->toggleStatus(m_RightSeat);
        model->togglIntensity(m_RightSeat);
        break;
    }
    default:
        break;
    }
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

int MassageProgram::getMassage_id() const
{
    cout<<"MassageProgram getMassage_id called"<<endl;
    return Massage_id;
}

void MassageProgram::setMassage_id(const int value)
{
    cout<<"MassageProgram setMassage_id called"<<endl;
    Massage_id = value;
}
