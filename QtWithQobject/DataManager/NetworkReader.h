#ifndef NETWORKREADER_H
#define NETWORKREADER_H
#include"QDebug"
#include"CommonReader.h"
#include<QThread>

class NetworkReader : public CommonReader
{
public:
    NetworkReader();
    ~ NetworkReader();
    void startReading();
private:
};

#endif // NETWORKREADER_H
