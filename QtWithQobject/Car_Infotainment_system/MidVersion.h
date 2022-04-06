#ifndef MIDVERSION_H
#define MIDVERSION_H
#include<Commanutiles.h>
#include<CAR.h>
class Vendor2;
class MidVersion:public CAR
{
public:
    MidVersion();
    ~MidVersion();
    void init();
    void print();

//    string getchassisNumber() const;
//    void setChassisNumber(const string chassisNumber);
private:
//     string m_chassisNumber;
     Vendor2 *m_vendor2;
};

#endif // MIDVERSION_H
