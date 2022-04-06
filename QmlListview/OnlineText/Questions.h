#ifndef QUESTIONS_H
#define QUESTIONS_H
#include<QString>
#include <QObject>
#include<QDebug>
class Questions : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString qn READ qn CONSTANT)
    Q_PROPERTY(QString option1 READ option1 CONSTANT)
    Q_PROPERTY(QString option2 READ option2 CONSTANT)
    Q_PROPERTY(QString option3 READ option3 CONSTANT)
    Q_PROPERTY(QString option4 READ option4 CONSTANT)
public:
    explicit Questions(QObject *parent = 0);

    QString qn() const;
    void setQn(const QString &qn);

    QString option1() const;
    void setOption1(const QString &option1);

    QString option2() const;
    void setOption2(const QString &option2);

    QString option3() const;
    void setOption3(const QString &option3);

    QString option4() const;
    void setOption4(const QString &option4);

    QString usrAns() const;
    void setUsrAns(const QString &usrAns);

    QString crtAns() const;
    void setCrtAns(const QString &crtAns);

signals:

public slots:
private:
    QString m_qn;
    QString m_option1;
    QString m_option2;
    QString m_option3;
    QString m_option4;
    QString m_usrAns;
    QString m_crtAns;
};

#endif // QUESTIONS_H
