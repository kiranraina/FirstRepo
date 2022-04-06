#include <iostream>
using namespace std;
#include<vector>
#include<Data.h>
#include<algorithm>
bool check(Data *ptr){
    return ptr->getId()==4;
}
int main(int argc, char *argv[])
{
    vector<Data*>*m_vector=new vector<Data*>;
   for(int i=1;i<10;i++)
   {
     Data *d=new Data;
     d->setId(i);
     m_vector->push_back(d);
   }
   vector<Data*>::iterator it=find_if(m_vector->begin(),m_vector->end(),check);
    cout <<(*it)->getId()<< endl;
    return 0;
}
