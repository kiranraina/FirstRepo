#include "ECGHardwareManger.h"
#include <QApplication>
#include<QPushButton>
#include"ECGHardwareManger.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ECGHardwareManger w;
    w.show();
//    QPushButton *push=new QPushButton;
ECGHardwareManger *ecg=new ECGHardwareManger;
    return a.exec();
}
