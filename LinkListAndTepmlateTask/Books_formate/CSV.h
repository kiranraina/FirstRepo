#ifndef CSV_H
#define CSV_H
#include"CommanUtiles.h"

class CSV:public FileFormat
{
public:
    CSV();
    void save();
    void read();
};

#endif // CSV_H
