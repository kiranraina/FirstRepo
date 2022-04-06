#include <iostream>
using namespace std;
template<typename ManiDatatype>void add(ManiDatatype x,ManiDatatype y){
    cout<<(x+y)<<endl;
    cout<<"*************************************"<<endl;

}
template<typename ManiDatatype,typename dt>void add(ManiDatatype x,dt y){
    cout<<(x+y)<<endl;
    cout<<"*************************************"<<endl;

}
template<typename ManiDatatype>void sub(ManiDatatype x,ManiDatatype y){
    cout<<(x-y)<<endl;
     cout<<"*************************************"<<endl;

}
int main(int argc, char *argv[])
{

 add<int>(2,3);
 add<float>(2.5,3.5);
  add<double>(10000.23,200.334556);

  sub<int>(2,3);
  sub<float>(2.5,3.5);
   sub<double>(10000.23,200.334556);

   add<int,float>(10,20.00);
   add<float,int>(20.30,40);

    cout << "Hello World!" << endl;
    return 0;
}
