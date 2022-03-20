
#include "ECGDisplay.h"

ECGDisplay::ECGDisplay()
{
    cout<<"ECGDisplay constructor"<<endl;
 init();
}
ECGDisplay::~ECGDisplay()
{
    cout<<"ECGDisplay destructor"<<endl;

}
bool ECGDisplay::print(){
cout<<"ECGDisplay print called"<<endl;
}
bool ECGDisplay::init(){
    cout<<"ECGDisplay init called"<<endl;

}
