#ifndef ECHMANGER_H
#define ECHMANGER_H

#include "MyLibarary.h"
class ECHManger
{
public:
    ECHManger();
     ECHManger(int x,int y,int z);
    ~ECHManger();
    bool print();
    bool init();
    void assignLibrary();
private:
   int m_x;
   int m_y;
   int m_z;
   MyLibarary m_lib;
};

#endif // ECHMANGER_H
