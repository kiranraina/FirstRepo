#ifndef DB_H
#define DB_H
#include<CommanUtiles.h>

class DB:public FileFormat
{
public:
    DB();
    void save();
    void read();
};

#endif // DB_H
