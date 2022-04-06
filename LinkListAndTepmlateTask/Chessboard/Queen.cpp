#include "Queen.h"

Queen::Queen()
{
  cout<<"Queen constructor called "<<endl;
}
Queen::~Queen()
{
  cout<<"Queen constructor called "<<endl;
}
bool Queen::move()
{
    cout<<"Queen move called"<<endl;
    int direct;
    cout<<"1.leftMove\n2.rightMove\n3.Front\n4.Back\n"<<endl;
    cout<<" which direction you want move"<<endl;
    cin>>direct;
    switch (direct) {
    case left:
        this->moveLeft();
        break;
    case right:
        this->moveRight();
        break;
    case front:
       this->moveFront();
        break;
    case back:
       this->moveBack();
        break;
    default:
        cout<<"selected the invalid number to move the Bishop"<<endl;
}
}
bool Queen::moveLeft()
{
    cout<<"Queen moveLeft called"<<endl;
}

bool Queen::moveRight()
{
    cout<<"Queen moveRight called"<<endl;
}

bool Queen::moveFront()
{
    cout<<"Queen moveFront called"<<endl;
}

bool Queen::moveBack()
{
    cout<<"Queen moveBack called"<<endl;
}
