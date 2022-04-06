#ifndef DATA_H
#define DATA_H
#include<iostream>
using namespace std;

class Data
{
public:
    Data();
    ~Data();
    int getId() const;
    void setId(int value);

private:
    int Id;

};

#endif // DATA_H
