#ifndef XMLREADER_H
#define XMLREADER_H
#include<QDebug>
#include"CommonReader.h"
#include<QThread>
class XMLReader : public CommonReader
{
public:
    XMLReader();
    ~XMLReader();
    void startReading();
private:
};

#endif // XMLREADER_H
