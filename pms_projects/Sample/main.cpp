#include <iostream>
#include<Patmonitor.h>
using namespace std;

int main(int argc, char *argv[])
{
    Patmonitor *pm1=Patmonitor::getSelf();
    Patmonitor *pm2=Patmonitor::getSelf();
    Patmonitor *pm3=Patmonitor::getSelf();
    Patmonitor *pm4=Patmonitor::getSelf();
    Patmonitor *pm5=Patmonitor::getSelf();
    //    Patmonitor::getMe();
    return 0;
}
