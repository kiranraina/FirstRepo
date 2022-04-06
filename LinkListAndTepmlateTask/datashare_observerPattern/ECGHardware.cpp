#include "ECGHardware.h"

ECGHardware::ECGHardware()
{
    cout<<"ECGHardware constructor"<<endl;
}

void ECGHardware::takedata(int x)
{
    cout<<"ECGHardware or derived-Data recv takedata"<<x<<endl;
}
