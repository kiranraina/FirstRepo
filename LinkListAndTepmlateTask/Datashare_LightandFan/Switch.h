#ifndef SWITCH_H
#define SWITCH_H
#include"Commonhead.h"

class Switch
{
public:
    Switch();
    bool registerWithMeForData(ISwitchData *ptr);
    bool startCollectingData();
private:
    ISwitchData *m_dataReciver[13];
    int m_howManyRegistered;
};

#endif // SWITCH_H
