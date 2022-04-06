#ifndef JSON_H
#define JSON_H
#include<CommanUtiles.h>

class JSON:public FileFormat
{
public:
    JSON();
    void save();
    void read();
};

#endif // JSON_H
