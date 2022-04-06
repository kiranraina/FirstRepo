#ifndef BOOKS_H
#define BOOKS_H
#include<iostream>
using namespace std;
#include"FileFormat.h"
#include"PDF.h"
#include"CSV.h"
#include"TXT.h"
#include"XML.h"
#include"BINARY.h"
#include"DOCS.h"
#include"JSON.h"
#include"DB.h"


class Books
{
public:
    Books();
    Books(int a);
    Books(int a,int b);
    Books(int a,int b,int c);
    Books(int a,int b,int c,int d);
    void save();
    void read();

private:
  FileFormat *m_ptr[8];
  int m_count=0;
};

#endif // BOOKS_H
