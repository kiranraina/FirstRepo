#include "Data.h"

Data::Data()
{
 cout<<"data constructor called"<<endl;
}
Data::~Data()
{
   cout<<"data destructor called"<<endl;
}

int Data::getId() const
{
     cout<<"data getId called"<<endl;
    return Id;
}

void Data::setId(int value)
{
     cout<<"data setId called"<<endl;
    Id = value;
}
