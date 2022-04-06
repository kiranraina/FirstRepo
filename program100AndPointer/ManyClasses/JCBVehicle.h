#ifndef JCBVEHICLE_H
#define JCBVEHICLE_H

#include <iostream>
using namespace std;
class JCBVehicle
{
public:
    JCBVehicle();
    ~JCBVehicle();
private:
    string m_color;
    string m_version;
    string m_carNo;
    string m_carType;
    string m_dozzer;
    string m_wheels;
    string m_loader;
    string m_stableLegs;
    string m_rocketBucket;

};

#endif // JCBVEHICLE_H
