#ifndef BOOK_H
#define BOOK_H
#include<iostream>
using namespace std;

class Book
{
public:
    Book();
    void operator=(const Book &b1);
    ~Book();
    bool print();
    bool init();
    int getpages()const;
    void setpages(const int pages);

    string getauthorName()const;
    void setauthorName(const string authorName);

    float getPrice()const;
    void  setPrice(const float price);

    string getName() const;
    void setName(const string name);

    string getChapterName() const;
    void setChapterName(const string chapterName);

private:
    int m_pages;
    string m_author_name;
    float m_price;
    string m_name;
    string m_chapterName;
};

#endif // BOOK_H
