#include <iostream>
#include "PatientMonitorSystem.h"

using namespace std;
int main(int argc, char *argv[])
{
    cout << "Welcome to PMS!" << endl;
    PatientMonitorSystem *pms_1=new PatientMonitorSystem();
//    pms_1->init();
//    pms_1->print();
    pms_1->inputPersonDetails();
    pms_1->initECGForPerson();
    return 0;
}
