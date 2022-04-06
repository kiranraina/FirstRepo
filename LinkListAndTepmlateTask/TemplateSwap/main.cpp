#include <iostream>

using namespace std;
//template<typename kiran,typename kumar>
//void swap(kiran x,kumar y){
//    kumar temp;
//   temp=x;
//    x=y;
//    y=temp;
//    cout<<x<<" "<<y<<endl;
//}

//template<typename sachin,typename darsan>
//sachin sum(sachin x,darsan y){
//    return(x+y);
//    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
//}
template<typename sachin>
sachin addition(sachin x,int y){  //deafult one need int
    cout<<"####################################"<<endl;
    cout<<(x+y)<<endl;
    return(x+y);
}

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
//    int x=200,y=400;
//    swap<int,float>(200,400.00);
//    int s=sum<int,float>(100,200.00);
//    cout<<s<<endl;

  addition<int>(100,200);
//    cout<<q<<endl;
    return 0;
}
