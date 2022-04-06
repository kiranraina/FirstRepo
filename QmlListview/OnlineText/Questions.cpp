#include "Questions.h"

Questions::Questions(QObject *parent) : QObject(parent)
{

}

QString Questions::qn() const
{
    return m_qn;
}

void Questions::setQn(const QString &qn)
{
    m_qn = qn;
}

QString Questions::option1() const
{
    return m_option1;
}

void Questions::setOption1(const QString &option1)
{
    m_option1 = option1;
}

QString Questions::option2() const
{
    return m_option2;
}

void Questions::setOption2(const QString &option2)
{
    m_option2 = option2;
}

QString Questions::option3() const
{
    return m_option3;
}

void Questions::setOption3(const QString &option3)
{
    m_option3 = option3;
}

QString Questions::option4() const
{
    return m_option4;
}

void Questions::setOption4(const QString &option4)
{
    m_option4 = option4;
}

QString Questions::usrAns() const
{
    return m_usrAns;
}

void Questions::setUsrAns(const QString &usrAns)
{
    m_usrAns = usrAns;
}

QString Questions::crtAns() const
{
    return m_crtAns;
}

void Questions::setCrtAns(const QString &crtAns)
{
    m_crtAns = crtAns;
}
