#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<"Mywidget constructor called" <<endl;
    this->init();
    int w=20;
}
int z=10;

MyWidget::~MyWidget()
{
    qDebug()<<"Mywidget destructor called" <<endl;
}

void MyWidget::init()
{
    qDebug()<<"Mywidget init called" <<endl;
    for(int i=1;i<11;i++){
        list1.push_back(i);
    }
    for(int j=20;j<31;j++){
        list2.push_back(j);
    }
    this->printAll();
}

void MyWidget::printAll()
{
    qDebug()<<"Mywidget printAll called" <<endl;
 int t=5;
    auto f1=[=](){
        //int x=10;
        qDebug()<<"lamda value called:"<<endl;
        it1=list1.begin();
        while(it1!=list1.end()){
            qDebug()<<"list1:"<<*it1+m_data1<<endl;
            //print(*it1);
            it1++;
        }

    };
    //    auto f1=[&](){
    //        int x=10;
    //         qDebug()<<"lamda value called:"<<x+10<<endl;
    //    };
    auto f2=[this](){
        //int x=10;
        qDebug()<<"lamda value called:"<<endl;
        it2=list2.begin();
        while(it2!=list2.end()){
            qDebug()<<"list2:"<<*it2<<endl;
            //print(*it2);
            it2++;
        }
    };
    f1();
    f2();
}
void MyWidget::print(int y)
{
    qDebug()<<"Mywidget print called"<<y+10<<endl;
}
