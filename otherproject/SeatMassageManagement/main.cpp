#include <iostream>
#include "MassageModel.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MassageModel *massagModel = MassageModel::getInstance();
    massagModel->start();

    return 0;
}
