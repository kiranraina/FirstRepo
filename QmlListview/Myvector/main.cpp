#include <iostream>
using namespace std;
#include"MyDevice.h"
#include"vector"
int main_1(int argc, char *argv[])
{
//    std::vector<int>v;
//    for(int i=0;i<10;i++){
//        v.push_back(i);
//    }
//    for(int i=0;i<v.size();i++){
//        int x=v.at(i);
//       std::cout<<x<<endl;
//    }
    std::vector<MyDevice>v2;
    MyDevice d1(4,5);
    v2.push_back(d1);
    cout << "+++++++++++++++++" << endl;
    MyDevice d2(2,3);
    v2.push_back(d2);
    cout << "+++++++++++++++++" << endl;
    MyDevice d3(20,30);
    v2.push_back(d3);
    return 0;
}
int main(int argc, char *argv[])
{

   std::vector<int> v;
   for(int i=0;i<10;i++){
       v.push_back(i);
   }
   vector<int>::iterator kiran;
   v.begin();
   v.end();
   kiran=v.begin();
   while(kiran!=v.end()){
       cout<<"Itreating"<<*kiran<<endl;
       kiran++;
   }

   std::vector<MyDevice> v2(4);
   std::vector<MyDevice>::iterator it;
   it=v2.begin();
   while (it!=v2.end()) {
        cout<<"Itreating"<<it.<<endl;
        it++;
   }
}
