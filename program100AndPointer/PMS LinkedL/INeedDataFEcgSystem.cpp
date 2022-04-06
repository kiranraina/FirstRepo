#include "INeedDataFEcgSystem.h"

INeedDataFEcgSystem::INeedDataFEcgSystem()
{
    cout << "INeedDataFEcgSystem Constructor"<<endl;
}

INeedDataFEcgSystem::~INeedDataFEcgSystem()
{
    cout << "INeedDataFEcgSystem Destructor"<<endl;
}

void INeedDataFEcgSystem::reciveData(int x){
    cout << "INeedDataFEcgSystem Recived data "<< x <<endl;
}
