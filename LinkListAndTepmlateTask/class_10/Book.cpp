#include "Book.h"

Book::Book()
{
    cout<<"Book constructor called"<<endl;
}

void Book::operator=(const Book &b1)
{
     cout<<"Book operator  called"<<endl;
    m_price=b1.m_price;
}

//Book::Book(const Book &b1)
//{
//    cout<<"Book constructor called"<<endl;
//}
Book::~Book()
{
  cout<<"Book destructor called"<<endl;
}
bool Book::init()
{
  cout<<"Book init called"<<endl;
   return true;
}

string Book::getName() const
{
     cout<<"Book getName called"<<endl;
    return m_name;
}
int Book:: getpages()const{
     cout<<"Book getpages called"<<endl;
    return m_pages;
}
void Book::setpages(const int pages){
    cout<<"Book setpages called"<<endl;
    m_pages=pages;
}
string Book::getauthorName() const
{
     cout<<"Book getauthorName called"<<endl;
    return m_author_name;
}

void Book::setauthorName(const string authorName)
{
      cout<<"Book setChapterName called"<<endl;
    m_author_name = authorName;
}


string Book::getChapterName() const
{
     cout<<"Book getChapterName called"<<endl;
    return m_chapterName;
}

void Book::setChapterName(const string chapterName)
{
      cout<<"Book setChapterName called"<<endl;
    m_chapterName = chapterName;
}

void Book::setName(const string name)
{
    cout<<"Book setName called"<<endl;
    m_name = name;
}
bool Book::print()
{
    cout<<"Book print called"<<endl;
     return true;
}
