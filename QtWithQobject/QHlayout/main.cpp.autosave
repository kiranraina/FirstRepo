#include "MyWidget.h"
#include <QApplication>
#include"QHBoxLayout"
#include"QPushButton"
#include"QRadioButton"
#include"QCheckBox"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    QWidget *window=new QWidget;

QPushButton *push=new QPushButton("pushbtn");
QRadioButton *radio=new QRadioButton("radiobtn");
QCheckBox *check=new QCheckBox("checkbtn");
QHBoxLayout *box=new QHBoxLayout;

box->addWidget(push);
box->addWidget(radio);
box->addWidget(check);

window->setLayout(box);
window->show();



    return a.exec();
}
