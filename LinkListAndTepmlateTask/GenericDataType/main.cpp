#include <iostream>
#include<Genericnumber.h>
#include<MYData.h>
#include<PErson.h>
#include<STudent.h>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Welcome to c++"<<endl;
//    Genericnumber<int,int> gen;

    PErson p1,p2;
    Genericnumber<PErson,PErson> gef;
    gef.compare(p1,p2);

//     Genericnumber<MYData,MYData>gsData;

//     Genericnumber<STudent,STudent>gStu;

//     Genericnumber<PErson,PErson>gPer;
    return 0;
}
