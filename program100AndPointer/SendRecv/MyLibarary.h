#ifndef MYLIBARARY_H
#define MYLIBARARY_H
#include "Book.h"
#include <iostream>
using namespace std;

class MyLibarary
{
public:
    MyLibarary();
    void init();
    void print();
     ~MyLibarary();
private:
    int m_x;
    int m_y;
    Book *m_oneBook;
    Book **m_manyBooks;
};

#endif // MYLIBARARY_H
