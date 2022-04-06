#include <iostream>
#include<LinkedArithematic.h>
using namespace std;

int main(int argc, char *argv[])
{
    LinkedArithematic<float> linkarth;
    struct Node<float>*m_p;
    m_p=nullptr;
    linkarth.append(&m_p,2.5);
    linkarth.append(&m_p,3.5);
    linkarth.append(&m_p,6.5);
    linkarth.display(m_p);

    LinkedArithematic<int> linkarth1;
    struct Node<int>*m_p1;
    m_p1=nullptr;
    linkarth1.append(&m_p1,2);
    linkarth1.append(&m_p1,3);
    linkarth1.append(&m_p1,6);
    linkarth1.display(m_p1);

    LinkedArithematic<string> linkarth2;
    struct Node<string>*m_p2;
    m_p2=nullptr;
    linkarth2.append(&m_p2,"hello");
    linkarth2.append(&m_p2,"world");
    linkarth2.append(&m_p2,"kiran");
    linkarth2.display(m_p2);
    cout << "Hello World!" << endl;
    return 0;
}
