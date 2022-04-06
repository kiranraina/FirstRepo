#include "LaserPrinter.h"

LaserPrinter::LaserPrinter()
{
cout<<"LaserPrinter constructor"<<endl;
}

LaserPrinter::~LaserPrinter()
{
cout<<"LaserPrinter destructor"<<endl;
}

void LaserPrinter::sendData()
{
cout<<"LaserPrinter send data"<<endl;
}

void LaserPrinter::receiveData(int x)
{
cout<<"LaserPrinter data received is "<<x<<endl;
}
