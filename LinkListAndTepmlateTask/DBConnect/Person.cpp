#include "Person.h"
int Person::m_index=0;

Person::Person()
{
    cout<<"Person constructor called"<<endl;
m_count=0;
}
Person::~Person()
{
    cout<<"Person destructor called"<<endl;
}

string Person::GetName() const
{
    cout<<"Person GetName called"<<endl;
    return m_name;
}

void Person::SetName(const string name)
{
    cout<<"Person SetName called"<<endl;
    m_name=name;
}

string Person::GetGender() const
{
    cout<<"Person GetGender called"<<endl;
    return m_gender;
}

void Person::SetGender(const string gender)
{
    cout<<"Person SetGender called"<<endl;
    m_gender=gender;
}

int Person::GetAge() const
{
    cout<<"Person GetAge called"<<endl;
   return m_age;
}

void Person::SetAge(const int age)
{
    cout<<"Person SetName called"<<endl;
    m_age=age;
}

string Person::GetOccuption() const
{
    cout<<"Person GetOccuption called"<<endl;
    return m_occuption;
}

void Person::SetOccuption(const string occuption)
{
    cout<<"Person SetOccuption called"<<endl;
    m_occuption=occuption;
}

int Person::getId() const
{
      cout<<"Person getId called"<<endl;
    return m_id;
}

void Person::setId(int value)
{
    cout<<"Person setId called"<<endl;
    m_id = value;
}

void Person::Print()
{
    cout<<"Person Print called"<<endl;
    cout<<m_id<<endl;
    cout<<m_name<<endl;
    cout<<m_age<<endl;
    cout<<m_gender<<endl;
    cout<<m_occuption<<endl;
}
void Person::init(){
     cout<<"Person init called"<<endl;
       cout<<"Enter how many person want enter"<<endl;
       cin>>m_count;
       for(int i=0;i<m_count;i++)
       {
     cout<<"Enter the person id"<<endl;
     cin>>m_id;
     cout<<"Enter the person name"<<endl;
     cin>>m_name;
     cout<<"Enter the person age"<<endl;
     cin>>m_age;
     cout<<"Enter the person gender"<<endl;
     cin>>m_gender;
     cout<<"Enter the person occuption"<<endl;
     cin>>m_occuption;


       string person_info=to_string(m_id)+","+m_name+","+to_string(m_age)+","+m_gender+","+m_occuption;
       cout<<"person:"<<person_info<<endl;
       cout<<"Enter the type in which you want to save the data"<<endl;
       cin>>choice;

       switch(choice)
       {
       case Csv : csv = new CSV;
                  csv->SaveData(++m_index,person_info,to_string(m_id),m_name);
                 break;
       case Db : db = new DB;
                 db->SaveData(++m_index,person_info,to_string(m_id),m_name);
                 break;
       default : cout<<"Entered option is invalid"<<endl;
                 break;
       }
   }
   csv->readData();
   option();
}

void Person::option()
{
  cout<<" person option called"<<endl;
  cout<<" enter your option "<<endl;
  cout<<"1.Enter data\n2.Delete data\n3.Read data\n4.Exit"<<endl;
  cin>>choice;
  switch(choice)
  {
  case ENTERDATA :init();
            break;
  case DELETEDATA : csv->deleteData();
            break;
  case READDATA:readOption();
  case EXIT:exit(0);
  default : cout<<"Entered option is invalid"<<endl;
            break;
  }
}

void Person::readOption()
{
   cout<<" person readOption called"<<endl;
   cout<<"Enter from which file you want to read"<<endl;
   cout<<"1.CSV"<<"\n"<<"2.DB"<<"\n"<<endl;
   cin>>choice;
   switch(choice)
   {
   case Csv :csv->readData();
             break;
   case Db : db->readData();
             break;
   default : cout<<"Entered option is invalid"<<endl;
             break;
   }
}



