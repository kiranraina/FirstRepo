#include "FileFormat.h"

FileFormat::FileFormat()
{
  cout<<"FileFormat constructor called"<<endl;
}
FileFormat::~FileFormat()
{
    cout<<"FileFormat destructor called"<<endl;
}

void FileFormat::readData()
{
    cout<<"FileFormat readData called"<<endl;
}

void FileFormat::deleteData()
{
   cout<<"FileFormat deleteData called"<<endl;
}

void FileFormat::SaveData(int index,string data,string id,string name)
{
   cout<<"FileFormat SaveData called"<<endl;
}
