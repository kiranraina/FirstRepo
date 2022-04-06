#ifndef _3GREADER_H
#define _3GREADER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>
class _3GReader : public CommonReader
{
public:
    _3GReader();
    ~ _3GReader();
    void startReading();
private:
};

#endif // _3GREADER_H
