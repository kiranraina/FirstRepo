#include "DB.h"
//DB *DB::m_self=nullptr;
DB::DB()
{
  cout<<"Db constructor called"<<endl;
//  m_person->Print();
//  this->SaveData();
}
DB::~DB()
{
    cout<<"Db destructor called"<<endl;

}

void DB::readData()
{
    cout<<"Db readData called"<<endl;
}
void DB::deleteData()
{
    cout<<"Db deleteData called"<<endl;
}

void DB::SaveData(int index,string data,string id,string name)
{
    cout<<"Db SaveData called"<<endl;



}

//DB *DB::instanceObj()
//{
//    cout<<"Db instanceObj called"<<endl;
//    if(m_self==nullptr){
//        m_self=new DB;
//        return m_self;
//    }
//}
