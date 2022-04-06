#include "MassageRecord.h"

seatPosition MassageRecord::getSeatPosition() const
{
    return m_seatPosition;
}

void MassageRecord::setSeatPosition(seatPosition SeatPosition)
{
    m_seatPosition = SeatPosition;
}

MassageRecord::MassageRecord()
{
    std::cout << " Massage Record constructed " << std::endl;
  m_activeStatus=false;
}

MassageRecord::~MassageRecord()
{
    std::cout << " Massage Record destroyed " << std::endl;
}

void MassageRecord::setActivateStatus(const bool activateStatus){

    this->m_activeStatus = activateStatus;
}

bool MassageRecord::getActivateStatus()const{

    return m_activeStatus;
}

void MassageRecord::setIntensity(const Intensity intensity)
{
    m_intensity = intensity;
//    std::cout << "setIntensity " << m_intensity << std::endl;
}

Intensity MassageRecord::getIntensity()const
{
//    m_intensity = Intensity::SOFT;
    return m_intensity;
}
