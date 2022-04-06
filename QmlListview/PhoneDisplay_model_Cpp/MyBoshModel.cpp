#include "MyBoshModel.h"

MyBoshModel::MyBoshModel(QObject *parent)
    : QAbstractListModel(parent)
{
    this->addData("1","2","3");
//    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(insertData()));
//    connect(timer, &QTimer::timeout, this, &MyBoshModel::insertData());
//    timer->start();
}

QVariant MyBoshModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

int MyBoshModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.

    if (parent.isValid())
        return m_persons.size();

    return m_persons.size();

    // FIXME: Implement me!
}

QVariant MyBoshModel::data(const QModelIndex &index, int role) const
{
    int row=index.row();
    int col=index.column();
    if (!index.isValid())
        return QVariant();
    MyPerson *p=m_persons.at(row);
    switch (role) {
    case 10:return p->name();break;
    case 11:return p->phone();break;
    case 12:return p->email();break;


    }

    // FIXME: Implement me!
    return QVariant();
}

void MyBoshModel::addData(QString name, QString phone, QString email)
{
    qDebug()<<Q_FUNC_INFO<<"name"<<name<<endl;
    qDebug()<<Q_FUNC_INFO<<"phone"<<phone<<endl;
    qDebug()<<Q_FUNC_INFO<<"email"<<email<<endl;
    for(int i=0;i<10;i++)
    {
//        int i=0;
        QString n=QString("Saravana_")+QString::number(i+1000);
        QString n1=QString("Saravana_")+QString::number(99999999);
        QString n2=QString("Saravana@")+QString::number(i+10)+"bosch.com";

        MyPerson *p=new MyPerson;
        p->setName(n);
        p->setPhone(n1);
        p->setEmail(n2);
        this->m_persons.append(p);
    }
}

void MyBoshModel::insertData()
{
    int i=300;
    QString n=QString("vinu")+QString::number(i+1000);
    QString n1=QString("vinu")+QString::number(99999999);
    QString n2=QString("vinu@")+QString::number(i+10)+"bosch.com";

    MyPerson *p=new MyPerson;
    p->setName(n);
    p->setPhone(n1);
    p->setEmail(n2);

    int sz=this->m_persons.size();
    this->beginInsertRows(QModelIndex(),sz,sz);
    this->m_persons.append(p);
    this->endInsertRows();
}


QHash<int, QByteArray> MyBoshModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[10]="name";
    roles[11] ="phone";
    roles[12]="email";
    return roles;
}
