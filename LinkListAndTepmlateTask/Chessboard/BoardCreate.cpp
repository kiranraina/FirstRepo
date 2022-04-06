#include "BoardCreate.h"
//list<Board*>Board::m_listBoards;
BoardCreate::BoardCreate()
{
    cout<<"BoardCreate constructor called"<<endl;
    this->init();
}
BoardCreate::~BoardCreate()
{
    cout<<"BoardCreate destructor called"<<endl;
}

void BoardCreate::init()
{
    cout<<"BoardCreate init called"<<endl;
    for(int i=1;i<65;i++){
        Board *m_board=new Board;
        if(i<17||i>48){
            m_board->setOccuption("true");
            if(i%2)
            {
                m_board->setColor("white");
            }
            else
            {
                m_board->setColor("black");
            }
        }
        else
        {
            m_board->setOccuption("false");
        }

        m_listBoards.push_back(m_board);
    }
}

void BoardCreate::print()
{
    cout<<"BoardCreate print called"<<endl;
    list<Board*>::iterator it;
    it=m_listBoards.begin();
    int i=1;
    while(it!=m_listBoards.end())
    {

        cout<<(*it)<<endl;
        cout<<"Color:"<<(*it)->getcolor()<<endl;
        cout<<"occuption:"<<(*it)->getOccuption()<<endl;
        cout<<"****************************************************************"<<i++<<endl;
        it++;
    }
}

