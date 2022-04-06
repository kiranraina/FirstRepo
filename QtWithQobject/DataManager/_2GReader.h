#ifndef _2GREADER_H
#define _2GREADER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>
class _2GReader : public CommonReader
{
public:
    _2GReader();
    ~_2GReader();
    void startReading();
private:
};

#endif // _2GREADER_H
