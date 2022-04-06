#include "MainWindow.h"
#include <QApplication>
#include "QDebug"
#include"QPushButton"
#include"QCheckBox"
#include "QRadioButton"
#include"QSlider"
#include"QCalendarWidget"
#include"QProgressBar"
#include"QLineEdit"
#include"QTextEdit"
#include"QSpinBox"
#include"QDoubleSpinBox"
#include"QMainWindow"
#include"QHBoxLayout"
#include"QVBoxLayout"
#include"QGridLayout"
#include"QStackedLayout"
#include"QColorDialog"
#include"QFileDialog"
#include"QTableView"
#include"QTableWidget"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //    qDebug()<<object1->objectName()<<endl;

    //    QPushButton *qpush=new QPushButton("kiran");
    //    qpush->show();

    //    QRadioButton *qradio =new QRadioButton("sri");
    //    qradio->show();

    //    QCheckBox *qcheck= new QCheckBox("john");
    //    qcheck->show();

    //    QSlider *qslide=new QSlider;
    //    qslide->show();

    //    QCalendarWidget *qcal=new QCalendarWidget;
    //    qcal->show();

    //    QProgressBar *qpro=new QProgressBar;
    //    qpro->show();

    //    QLineEdit *qline=new QLineEdit;
    //    qline->show();

    //    QTextEdit *qtext=new QTextEdit;
    //    qtext->show();

    //    QSpinBox *qspin=new QSpinBox;
    //    qspin->show();

    //    QDoubleSpinBox *qdouble=new QDoubleSpinBox;
    //    qdouble->show();

    //    QMainWindow *qmain=new QMainWindow;
    //    qmain->show();

//    QWidget *window = new QWidget;
//    QPushButton *button1 = new QPushButton("One");
//       QPushButton *button2 = new QPushButton("two");
//    QHBoxLayout *qhbox=new QHBoxLayout;                            //no show
//    qhbox->addWidget(button1);
//      qhbox->addWidget(button2);
//    window->setLayout(qhbox);
//    window->show();


//       QWidget *window = new QWidget;
//       QPushButton *button1 = new QPushButton("One");
//       QPushButton *button2 = new QPushButton("two");
//       QVBoxLayout *qvbox=new QVBoxLayout;                       //no show
//       qvbox->addWidget(button1);
//       qvbox->addWidget(button2);
//       window->setLayout(qvbox);
//       window->show();

    //QGridLayout *qgrid=new QGridLayout;                          //no show
    //qgrid->show();

//    QWidget *firstPageWidget = new QWidget;
//    QWidget *secondPageWidget = new QWidget;
//    QWidget *thirdPageWidget = new QWidget;
//    QStackedLayout *qstack=new QStackedLayout;               //no show
//    qstack->addWidget(firstPageWidget);
//    qstack->addWidget(secondPageWidget);
//    qstack->addWidget(thirdPageWidget);
    //    qstack->show();

    //    QColorDialog *qcolor=new QColorDialog("red");
    //    qcolor->show();

    //      QFileDialog *qfile=new QFileDialog;
    //      qfile->show();

    //    QTableView *Qtable=new QTableView;
    //    Qtable->show();

    //      QTableWidget *qtable=new QTableWidget;
    //      qtable->show();

    return a.exec();
}
