#include "Superphone.h"

SuperPhone::SuperPhone()
{
  cout<<"Superphone constructor";
}

string SuperPhone::os() const
{
    return m_os;
}

void SuperPhone::setOs(const string &os)
{
    m_os = os;
}

string SuperPhone::simcardType() const
{
    return m_simcardType;
}

void SuperPhone::setSimcardType(const string &simcardType)
{
    m_simcardType = simcardType;
}

int SuperPhone::camPixels() const
{
    return m_camPixels;
}

void SuperPhone::setCamPixels(int camPixels)
{
    m_camPixels = camPixels;
}

void SuperPhone::sendMessage()
{
    cout<<"superphone";
}
void SuperPhone::Videocall()
{
    cout<<"Videocall";
}
SuperPhone::~SuperPhone()
{
  cout<<"Superphone constructor";
}
void SuperPhone::addFeatures(string brand, string color)
{
   cout<<"brand"<<endl;
}
