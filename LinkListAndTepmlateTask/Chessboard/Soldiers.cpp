#include "Soldiers.h"

Soldiers::Soldiers()
{
  cout<<"Soldiers constructor called"<<endl;
}
Soldiers::~Soldiers()
{
    cout<<"Soldiers destructor called"<<endl;
}

bool Soldiers::move()
{
    cout<<"Soldiers move called"<<endl;
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
bool Soldiers::moveLeft()
{
    cout<<"Soldiers moveLeft called"<<endl;
}

bool Soldiers::moveRight()
{
    cout<<"Soldiers moveRight called"<<endl;
}

bool Soldiers::moveFront()
{
    cout<<"Soldiers moveFront called"<<endl;
}

bool Soldiers::moveBack()
{
    cout<<"Soldiers moveBack called"<<endl;
}

