#ifndef PERSON_H
#define PERSON_H
#include<CommanUtils.h>
#include<FileFormat.h>
#include<CSV.h>
#include<DB.h>
class Person
{
    enum Choice{
        Csv = 1,
        Db = 2
    };
    enum Options{
        ENTERDATA = 1,
        DELETEDATA = 2,
        READDATA = 3,
        EXIT = 4
    };
public:
    Person();
    ~Person();

    void Print();
    void init();
    void option();
    void readOption();

    string GetName()const;
    void SetName(const string name);

    string GetGender()const;
    void SetGender(const string gender);

    int GetAge()const;
    void SetAge(const int age);

    string GetOccuption()const;
    void SetOccuption(const string occuption);


    int getId() const;
    void setId(int value);

private:
    int choice;
    FileFormat *csv,*db;
    string m_name;
    int m_id;
    string m_gender;
    int m_age;
    string m_occuption;
    int m_count;
    static int m_index;

};
#endif // PERSON_H
