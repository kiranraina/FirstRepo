#include "Question.h"

Question::Question()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

QString Question::question() const
{
    return m_question;
}

void Question::setQuestion(const QString question)
{
    m_question = question;
}

QString Question::option1() const
{
    return m_option1;
}

void Question::setOption1(const QString option1)
{
    m_option1 = option1;
}

QString Question::option2() const
{
    return m_option2;
}

void Question::setOption2(const QString option2)
{
    m_option2 = option2;
}

QString Question::option3() const
{
    return m_option3;
}

void Question::setOption3(const QString option3)
{
    m_option3 = option3;
}

QString Question::option4() const
{
    return m_option4;
}

void Question::setOption4(const QString option4)
{
    m_option4 = option4;
}

QString Question::correctAnswer() const
{
    return m_correctAnswer;
}

void Question::setCorrectAnswer(const QString correctAnswer)
{
    m_correctAnswer = correctAnswer;
}

QString Question::userAnswer() const
{
    return m_userAnswer;
}

void Question::setUserAnswer(const QString userAnswer)
{
    m_userAnswer = userAnswer;
}

int Question::id() const
{
    return m_id;
}

void Question::setId(int id)
{
    m_id = id;
}
