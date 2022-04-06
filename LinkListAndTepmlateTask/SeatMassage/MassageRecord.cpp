#include "MassageRecord.h"

MassageRecord::MassageRecord()
{
    cout<<"MassageRecord constructor called"<<endl;
   m_activeStatus=false;
}
MassageRecord::~MassageRecord()
{
    cout<<"MassageRecord destructor called"<<endl;
}
seatPosition MassageRecord::getSeatPosition() const
{
     cout<<"MassageRecord getSeatPosition called"<<endl;
    return m_seatPosition;
}

void MassageRecord::setSeatPosition(const seatPosition SeatPosition)
{
     cout<<"MassageRecord setSeatPosition called"<<endl;
    m_seatPosition = SeatPosition;
}

void MassageRecord::setActiveStatus( const bool activeStatus)
{
    cout<<"MassageRecord setActiveStatus called"<<endl;
    m_activeStatus = activeStatus;
}

bool MassageRecord::getactiveStatus()const
{
     cout<<"MassageRecord getactiveStatus called"<<endl;
    return m_activeStatus;
}

void MassageRecord::setIntensity(const Intensity intensity)
{
     cout<<"MassageRecord setIntensity called"<<endl;
    m_intensity = intensity;
}

Intensity MassageRecord::getIntensity() const
{
     cout<<"MassageRecord getIntensity called"<<endl;
    return m_intensity;
}



