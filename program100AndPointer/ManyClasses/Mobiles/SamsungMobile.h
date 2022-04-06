#ifndef SAMSUNGMOBILE_H
#define SAMSUNGMOBILE_H

#include <iostream>
//#include<QString>
using namespace std;
class SamsungMobile
{
public:
    SamsungMobile();
    ~SamsungMobile();
private:
    string  m_model;
    string m_camera;
    string m_color;
    string m_displaySize;
    string m_speaker;
    string m_mike;
    string m_imienumber;
    string m_OsVerison;
    string m_chargingPort;
    string m_memory;
};

#endif // SAMSUNGMOBILE_H
