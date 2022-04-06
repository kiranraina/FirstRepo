#include <iostream>
using namespace std;
//#include<son.h>
//#include<father.h>
class base //single base class
{
public:
    base(int x){
      cout << "base constructor called"<<x<<endl;
    }
   ~base(){
      cout << "base constructor called"<<endl;
    }
    void getdata()
    {
        cout << "Enter value of x= "; cin >> x;
    }
private:
    int x;
public:
    int y;
protected:
    int z;
};
class derive1 : public base // derived class from base class
{
    public:
    derive1():base(2)
    {

      cout << "derive1 constructor called"<<endl;
    }
    ~derive1(){
      cout << "derive1 destructor called"<<endl;
    }
private:

    int y;
    void readdata()
    {
        cout << "\nEnter value of y= "; cin >> y;
    }
};
class derive2 : public derive1   // derived from class derive1
{
    protected:
    int z;
    public:
    void indata()
    {
        cout << "\nEnter value of z= "; cin >> z;
    }
    void product()
    {
        cout << "\nProduct= " << x * y * z;
    }
};
int main()
{
//     father *a=new son;
//     delete a;
     //object of derived class
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     return 0;
}
