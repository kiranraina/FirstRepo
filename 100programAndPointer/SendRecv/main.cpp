#include <iostream>
#include<MyReceiver.h>
//#include<MySender.h>
#include "ECHManger.h"
using namespace std;
int main(){
ECHManger ecgmg;
    ecgmg.assignLibrary();
    ecgmg.print();
}

//int main_1(int argc, char *argv[])
//{
//    cout << "Hello World!" << endl;
//    MyReceiver *r1=new MyReceiver;
//    r1->start();
//    ECHManger mg(10,20,30);
//    mg.print();
//    printf("mg=%u",&mg);
//    ECHManger mg1(40,50,60);
//    mg1=mg;
//    printf("after\n");
//    printf("mg=%u",&mg);
//     printf("mg1=%u",&mg1);
////      printf("mg=%u",&mg.m_x);
////       printf("mg=%u",mg);
////        printf("mg=%u",mg);
//    mg1.print();
//    return 0;
//}
