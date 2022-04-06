#ifndef WIFIREADER_H
#define WIFIREADER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>
class WifiReader : public CommonReader
{
public:
    WifiReader();
    ~WifiReader();
    void startReading();
private:
};

#endif // WIFIREADER_H
