#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    printf("\n%u\n %u\n %d\n %u\n %u\n",a,&a,&p,*p,*(*p));
    cout << "Hello World!" << endl;
    return 0;
}
