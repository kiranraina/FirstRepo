#include "Bishop.h"

Bishop::Bishop()
{
 cout<<"Bishop constructor called"<<endl;
}
Bishop::~Bishop()
{
 cout<<"Bishop destructor called"<<endl;
}
bool Bishop::move()
{
    cout<<"Bishop move called"<<endl;
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
        break;
    }
}
bool Bishop::moveLeft()
{
    cout<<"Bishop moveLeft called"<<endl;

}

bool Bishop::moveRight()
{
    cout<<"Bishop moveRight called"<<endl;
}

bool Bishop::moveFront()
{
    cout<<"Bishop moveFront called"<<endl;
}

bool Bishop::moveBack()
{
    cout<<"Bishop moveBack called"<<endl;
}
