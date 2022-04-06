#include "MyWidget.h"
#include <QApplication>
#include<list>
#include<QDebug>
void print(int);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
//    std::list<int>list1,list2;
//    std::list<int>::iterator it1;
//    std::list<int>::iterator it2;
//    for(int i=1;i<11;i++){
//        list1.push_back(i);
//    }
//    for(int j=20;j<31;j++){
//        list2.push_back(j);
//    }
//    auto f1=[](){
//        int x=10;
//         qDebug()<<"lamda called:"<<x+10<<endl;
//    };
//    int sum=200;
//    auto f2=[=](int x){
//         qDebug()<<"lamda called:"<<x+20+sum<<endl;
//         while(it2!=list2.end()){
//             qDebug()<<"list2:"<<*it2+10<<endl;
//     //        print(*it2);
//             f2(*it2);
//             it2++;
//         }
//    };
////caputurelist,parameter,return type{};
////[](int x)->int{};
//    it1=list1.begin();
//    while(it1!=list1.end()){
//        qDebug()<<"list1:"<<*it1+10<<endl;
////         print(*it1);
//        f2(*it1);
//        it1++;
//    }

//    it2=list2.begin();
//    while(it2!=list2.end()){
//        qDebug()<<"list2:"<<*it2+10<<endl;
////        print(*it2);
//        f2(*it2);
//        it2++;
//    }
    return a.exec();
}
//void print(int y){
//    qDebug()<<"print called:"<<y+10<<endl;
//}
