#ifndef FANS_H
#define FANS_H
#include"Commonhead.h"

class Fans:public ISwitchData
{
public:
    Fans();
    void takedata(int x);
};

#endif // FANS_H
