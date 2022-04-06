#ifndef FILEFORMAT_H
#define FILEFORMAT_H
#include<CommanUtils.h>

class FileFormat
{
public:
    FileFormat();
   virtual ~FileFormat();
    virtual void SaveData(int index,string data,string id,string name);
    virtual void readData();
    virtual void deleteData();
};

#endif // FILEFORMAT_H
