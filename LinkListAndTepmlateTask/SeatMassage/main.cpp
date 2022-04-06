#include <iostream>
#include"MassageModel.h"
using namespace std;

int main(int argc, char *argv[])
{
   MassageModel *mmodel= MassageModel::getInstance();
   mmodel->startMassage();
    cout << "Hello World!" << endl;
    return 0;
}
