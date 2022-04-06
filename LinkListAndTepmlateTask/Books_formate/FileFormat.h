#ifndef FILEFORMAT_H
#define FILEFORMAT_H
#include<iostream>
using namespace std;

class FileFormat
{
public:
    FileFormat();
   virtual void save();
    virtual void read();
};

#endif // FILEFORMAT_H
