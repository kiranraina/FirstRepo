#include "Laptop.h"

Laptop::Laptop()
{
    cout << "Laptop constructor" << endl;
    initprinter();
}

void Laptop::start() {
    for(int i=0;i<3;i++) {
        m_printer[i]->registerwithprinter(this);
        m_printer[i]->sendingdata(i);
    }
}

void Laptop::recevedata(int x)
{
    cout << "laptop received data from printer: " << x << endl;

}


void Laptop::initprinter()
{
    cout << "initprint()" << endl;
    m_printer = new Printer*[3];
    for (int i=0;i<3;i++) {
        m_printer[i]= new Printer;
    }
}

void Laptop::print()
{
    cout<< "Printing in lap" << endl;

}
