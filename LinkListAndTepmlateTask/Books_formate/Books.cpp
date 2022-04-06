#include "Books.h"

Books::Books()
{

    cout<<"Book 0 parameter constructor called"<<endl;

}
Books::Books(int a)
{
    m_count=0;
    cout<<"Book 1 parameter constructor called"<<endl;
//    if(a==1){
//        m_ptr[0]=new PDF;
//         m_count++;
//    }
    switch (a) {
    case 1:
        m_ptr[0]=new DB;
        m_count++;
        break;
    case 2:
        m_ptr[0]=new XML;
        m_count++;
        break;
    case 3:
        m_ptr[0]=new DOCS;
        m_count++;
        break;
    case 4:
        m_ptr[0]=new TXT;
        m_count++;
        break;
    case 5:
        m_ptr[0]=new BINARY;
        m_count++;
        break;
    case 6:
        m_ptr[0]=new CSV;
        m_count++;
        break;
    case 7:
        m_ptr[0]=new PDF;
        m_count++;
        break;
    case 8:
        m_ptr[0]=new JSON;
        m_count++;
        break;

    }
}
Books::Books(int a,int b)
{
     m_count=0;
    cout<<"Book 2 parameter constructor called"<<endl;
    if(a==1){
        m_ptr[0]=new DB;
         m_count++;
    }
    if(b==2){
        m_ptr[1]=new XML;
         m_count++;
    }
}
Books::Books(int a,int b,int c)
{
    m_count=0;
   cout<<"Book 3 parameter constructor called"<<endl;
   if(a==1){
       m_ptr[0]=new DB;
       m_count++;
   }
   if(b==2){
       m_ptr[1]=new XML;
        m_count++;
   }
   if(c==3){
       m_ptr[1]=new DOCS;
        m_count++;
   }
}
Books::Books(int a,int b,int c,int d)
{
    m_count=0;
   cout<<"Book 3 parameter constructor called"<<endl;
   if(a==1){
       m_ptr[0]=new DB;
       m_count++;
   }
   if(b==2){
       m_ptr[1]=new XML;
        m_count++;
   }
   if(c==3){
       m_ptr[1]=new DOCS;
        m_count++;
   }
   if(d==4){
       m_ptr[1]=new TXT;
        m_count++;
   }
}

void Books::save()
{
    cout<<"Book save function called"<<endl;
    for(int i=0;i<m_count;i++){
        m_ptr[i]->save();
    }
}
void Books::read()
{
    cout<<"Book read function called"<<endl;
    for(int i=0;i<m_count;i++){
        m_ptr[i]->read();
    }
}
