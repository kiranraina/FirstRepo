#ifndef CAR_H
#define CAR_H
#include<Commanutiles.h>

class CAR
{
public:
    CAR();
   virtual ~CAR();
   virtual void init();
    void print();
    string getchassisNumber() const;
    void setChassisNumber(const string chassisNumber);

    string getVarient() const;
    void setVarient(const string varient);

private:
    string m_chassisNumber;
    string m_varient;
};

#endif // CAR_H
