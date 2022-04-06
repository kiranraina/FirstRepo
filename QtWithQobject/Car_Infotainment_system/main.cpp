#include <iostream>
#include<CARMANAGER.h>
using namespace std;

int main(int argc, char *argv[])
{
    enum choice{BUY=1,EXIT=2};
    cout << "Hello World!" << endl;
    CARMANAGER *Car=new CARMANAGER;
    Car->init();
    Car->insertData();
    string carNumber;
     int choice;

     while(1){
         cout << "Enter your choice:" << endl;
         cout << "1 - Buy Car" << endl;
         cout << "2 - Exit" << endl;
         cin >> choice;

         switch(choice){
         case BUY:
         {
             cout << "Enter Car Number" << endl;
             cin >> carNumber;

             bool val = Car->userCar(carNumber);
             cout<<"val"<<val<<endl;

             if(val == true){
                 cout << "Car is assigned to user" << endl;
                 cout << endl;
             }
             else
             {
                 cout << "Car Number is not found" << endl;
             }
             Car->function();
             break;
         }

         case EXIT:
         {
             delete Car;
             return 0;

         }
         }
     }

}
