#ifndef CSV_H
#define CSV_H
#include<CommanUtils.h>
#include<FileFormat.h>
//#include<Person.h>
#include<fstream>
#include "string.h"
class Person;
class CSV:public FileFormat
{
public:
    CSV();
    ~CSV();
    void SaveData(int index,string data,string id,string name);
    void readData();
    void deleteData();
private:
    string m_name;
    string m_gender;
    int index;
    int index_delete;
    string m_occuption;
    int choice;
    static int m_index;
//     static CSV *m_csv;
};



#endif // CSV_H
