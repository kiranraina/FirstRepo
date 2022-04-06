#include <iostream>
#include "MassageModel.h"

using namespace std;

int main()
{
    MassageModel *mmdoel = MassageModel::getMe();
//    mm->init();
    mmdoel->start();
    return 0;
}
