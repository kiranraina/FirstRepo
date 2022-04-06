#include <iostream>
#include<Authentications.h>
#include"GoogleAuthentication.h"
#include"LinkedInAuthentication.h"
using namespace std;

int main(int argc, char *argv[])
{
    Authentications *auth;
    auth=new GoogleAuthentication;
    auth->verify("kiran","kiran123");

    auth=new LinkedInAuthentication;
    auth->verify("kumar","kumar13");

//    GoogleAuthentication gl;
    cout << "Hello World!" << endl;
    return 0;
}
