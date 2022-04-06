#ifndef INEEDDATAFECGSYSTEM_H
#define INEEDDATAFECGSYSTEM_H
#include <iostream>
using namespace std;
class INeedDataFEcgSystem
{
public:
    INeedDataFEcgSystem();

    virtual void reciveData(int x);

    ~INeedDataFEcgSystem();
};

#endif // INEEDDATAFECGSYSTEM_H
