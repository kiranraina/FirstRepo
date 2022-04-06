#ifndef DBREADER_H
#define DBREADER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>

class DBReader : public CommonReader
{
public:
    DBReader();
    ~DBReader();
    void startReading();
private:
};

#endif // DBREADER_H
