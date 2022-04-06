#ifndef RS232READER_H
#define RS232READER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>

class RS232Reader : public CommonReader
{
public:
    RS232Reader();
    ~RS232Reader();
    void startReading();
private:
};

#endif // RS232READER_H
