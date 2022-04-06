#include "ECGSensor.h"
using namespace Device;
ECGSensor::ECGSensor()
{
    cout << "Inside ECGSensor Constructor"<<endl;
}

Device::ECGSensor::~ECGSensor()
{
    cout << "ECGSensor Destrucor"<<endl;
}

ECGSensor::ECGSensor(ECGHardware *r)
{
    m_reciver=r;
}

ECGSensor::ECGSensor(const ECGSensor &sensor)
{

    this->m_x = sensor.m_x;
    cout << "Inside ECGSensor Copy Constructor"<<endl;
}

bool ECGSensor::registerWithMe(INeedData *iNeedData){
    cout << " ECGSensor Register with me " << endl;
    m_dataRec = iNeedData;
    return true;
}

bool ECGSensor::startCollectingData()
{
    cout << "ECGSensor Start Collecting Data"<< endl;
    m_dataRec->reciveSenData(10);
    return true;
}

int ECGSensor::getX() const
{
    return m_x;
}

void ECGSensor::setX(int X)
{
    m_x = X;
}

bool ECGSensor::print()
{
    cout << "ECGSensor Print" <<endl;
    return true;
}

void ECGSensor::init()
{
    cout << "Inside ECGSensors init() " <<endl;
}

bool ECGSensor::start()
{
    cout << "ECGSensor started" << endl;
//    m_reciver->reciveData();
    return true;
}


bool ECGSensor::stop()
{
    cout << "Stop"<<endl;
    return true;
}

void ECGSensor::operator=(const ECGSensor &sensor)
{
    this->m_x = sensor.m_x;
}
