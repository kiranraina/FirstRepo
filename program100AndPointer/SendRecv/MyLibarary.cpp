#include "MyLibarary.h"

MyLibarary::MyLibarary()
{
  cout<<"MyLibarary constructor"<<endl;
  init();
}

MyLibarary::init()
{
  cout<<"MyLibarary init"<<endl;
  m_x=100;
  m_y=200;
  m_oneBook=nullptr;
  m_manyBooks=nullptr;

  m_oneBook=new Book;
  m_manyBooks=new Book*[10];
  for(int i=0;i<10;i++){
      m_manyBooks[i]=nullptr;
       m_manyBooks[i]=new Book;
  }
}
MyLibarary::print()
{
  cout<<"MyLibarary init"<<endl;
  m_x=100;
  m_y=200;
  cout<<"X"<<m_x<<endl;
  cout<<"X"<<m_y<<endl;
   m_oneBook->print();
  for(int i=0;i<10;i++){
       m_manyBooks[i]->print();
  }
}
  MyLibarary::~MyLibarary()
  {
      cout<<"MyLibarary desstructor"<<endl;
         for(int i=0;i<10;i++){
              delete m_manyBooks[i];
            }
          delete m_manyBooks;
         delete m_oneBook;
   }
