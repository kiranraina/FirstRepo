#ifndef TOPVERSION_H
#define TOPVERSION_H
#include<Commanutiles.h>
#include<CAR.h>
class Vendor3;
class TopVersion:public CAR
{
public:
    TopVersion();
    ~TopVersion();
    void init();
    void print();

//    string getchassisNumber() const;
//    void setChassisNumber(const string chassisNumber);
private:
//     string m_chassisNumber;
     Vendor3 *m_vendor3;
};

#endif // TOPVERSION_H
