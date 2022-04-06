#ifndef QUESTION_H
#define QUESTION_H
#include<QDebug>
#include<QString>
#include <QObject>

class Question:public QObject
{
   Q_OBJECT
public:
    Question();
    Q_INVOKABLE QString question() const;
    void setQuestion(const QString question);

    Q_INVOKABLE QString option1() const;
    void setOption1(const QString option1);

    Q_INVOKABLE QString option2() const;
    void setOption2(const QString option2);

    Q_INVOKABLE QString option3() const;
    void setOption3(const QString option3);

    Q_INVOKABLE QString option4() const;
    void setOption4(const QString option4);

    Q_INVOKABLE QString correctAnswer() const;
    void setCorrectAnswer(const QString correctAnswer);

    Q_INVOKABLE QString userAnswer() const;
    void setUserAnswer(const QString userAnswer);

   Q_INVOKABLE  int id() const;
    void setId(int id);

private:
    int m_id;
    QString m_question;
    QString m_option1;
    QString m_option2;
    QString m_option3;
    QString m_option4;
    QString m_correctAnswer;
    QString m_userAnswer;

};

#endif // QUESTION_H
