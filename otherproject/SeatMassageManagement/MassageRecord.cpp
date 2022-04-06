#include "MassageRecord.h"
#include "MassageModel.h"

Intensity MassageRecord::getInntencityvalue() const
{
    return inntencityvalue;
}

void MassageRecord::setInntencityvalue(const Intensity &value)
{
    inntencityvalue = value;
}

MassageRecord::MassageRecord()
{
    cout << "MassageRecord Constructor" << endl;
    m_activeStatus=false;
}

MassageRecord::~MassageRecord()
{
    cout << "MassageRecord Destructor" << endl;
}

bool MassageRecord::getActiveStatus() const
{
    return m_activeStatus;
}

void MassageRecord::setActiveStatus(bool activeStatus)
{
    m_activeStatus = activeStatus;
}

SeatPosition MassageRecord::getPosition() const
{
    return position;
}

void MassageRecord::setPosition(const SeatPosition &value)
{
    position = value;
}




