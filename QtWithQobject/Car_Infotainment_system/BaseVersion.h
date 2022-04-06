#ifndef BASEVERSION_H
#define BASEVERSION_H
#include<Commanutiles.h>
#include<CAR.h>
//#include<Vendor1.h>
class Vendor1;
class BaseVersion:public CAR
{
public:
    BaseVersion();
    ~BaseVersion();
    void init();
    void print();
//    string getchassisNumber() const;
//    void setChassisNumber(const string chassisNumber);
//    void receiveData(Vendor1 *ven);

private:
//    string m_chassisNumber;
    Vendor1 *m_vendor1;
};

#endif // BASEVERSION_H
