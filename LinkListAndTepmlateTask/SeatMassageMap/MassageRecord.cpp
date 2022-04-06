#include "MassageRecord.h"

MassageRecord::MassageRecord()
{
    cout<<"MassageRecord constructor called"<<endl;
    m_activeStatus=false;
    m_intensity=1;

}
MassageRecord::~MassageRecord()
{
    cout<<"MassageRecord destructor called"<<endl;
}
void MassageRecord::print()
{
    cout<<"MassageRecord print called"<<endl;
}
void MassageRecord::init()
{
    cout<<"MassageRecord init called"<<endl;
}

bool MassageRecord::getactiveStatus() const
{
    cout<<"MassageRecord getactiveStatus called"<<endl;
    return m_activeStatus;
}

void MassageRecord::setActiveStatus(const bool activeStatus)
{
    cout<<"MassageRecord setActiveStatus called"<<endl;
    if(activeStatus == true)
    {
        m_activeStatus = true;
        cout<<"Massage is  set active status"<<endl;
    }
    else if(activeStatus == false)
    {
        m_activeStatus = false;
        cout<<"Massage is  set not active status"<<endl;
    }
}


void MassageRecord::setIntensity( int intensity)
{
    cout<<"MassageRecord setIntensity called"<<endl;
    cout<<"inten"<<intensity<<endl;
    if(intensity==SOFT)
    {
        m_intensity = SOFT;
        cout<<"MassageRecord Intensity set to soft called"<<endl;
    }
//    cout<<"inten"<<intensity<<endl;
    else if(intensity==HARD)
    {

        m_intensity = HARD;

        cout<<"MassageRecord Intensity set to hard called"<<endl;
    }else{};
}

int MassageRecord::getintensity()
{
    cout<<"MassageRecord getintensity called"<<endl;
    return m_intensity;
}
void MassageRecord::setSeatPosition(const int seatposition)
{
    cout<<"MassageRecord setSeatPosition called"<<endl;
    if(seatposition==1){
        m_seatPosition = DRIVER;
        cout<<"MassageRecord setSeatPosition set driver called"<<endl;
    }
    else if(seatposition==2){
        m_seatPosition = PASSENGER;
        cout<<"MassageRecord setSeatPosition set passenger called"<<endl;
    }
}
int MassageRecord::getSeatPosition()const
{
    return m_seatPosition;
}
