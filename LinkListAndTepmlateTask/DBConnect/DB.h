#ifndef DB_H
#define DB_H
#include<CommanUtils.h>
#include<FileFormat.h>
//#include<Person.h>

class Person;
class DB:public FileFormat
{
public:
    DB();
    ~DB();
    void SaveData(int index,string data,string id,string name);
    void readData();
    void deleteData();
//    static DB* instanceObj();
private:
//    static DB *m_self;
};

#endif // DB_H
