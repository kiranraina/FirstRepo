#include <iostream>
#include "PatientMonitoringSystem.h"
#include "Person.h"

using namespace std;


int main()
{

    PatientMonitoringSystem *pms = new PatientMonitoringSystem;
    bool successful = pms->InputPersonDetails();
    if(successful== true){
        pms->initECGForPerson();
    }

    return 0;
}
