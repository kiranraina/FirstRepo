#include "CSV.h"
//CSV *CSV::m_csv=nullptr;
CSV::CSV()
{
    cout<<"CSV constructor called"<<endl;
}
CSV::~CSV()
{
    cout<<"CSV constructor called"<<endl;
}
void CSV::SaveData(int index,string data,string id,string name)
{
    cout<<"CSV SaveData called"<<endl;
//    fstream file4;
//         file4.open("./personfile.csv",ios::in);
//    if(!file4){
//        cout<<"file not open"<<endl;
//    }
//    else{
//        cout<<"file  open success"<<endl;
//        string line;

//        while(!file4.eof()){
//            getline(file4,line);
//            if(line.size()>0){
//                if((line.find(id)>-1)&&(line.find(name)>-1)){
//                    cout<<"Enter name and id already exits"<<endl;
//                }
//                else
//                {
//                    file4.close();
//                    cout<<"file4 close successful"<<endl;
//                    fstream file("./personfile.csv",ios::out|ios::app);
//                    if(!file){
//                        cout<<"file not created"<<endl;
//                    }
//                    else{
//                        cout<<"file  created success"<<endl;
//                        file<<index<<","<<data<<endl;
//                    }
//                    file.close();
//                }
//            }
//            cout<<"file there is no data"<<endl;
//        }
//    }

        fstream file("./personfile.csv",ios::out|ios::app);
        if(!file){
            cout<<"file not created"<<endl;
        }
        else{
            cout<<"file  created success"<<endl;
            file<<index<<","<<data<<endl;
        }
        file.close();
}

void CSV::readData()
{
    cout<<"CSV readData called"<<endl;
    fstream file("./personfile.csv",ios::in);
    if(!file){
        cout<<"file not open"<<endl;
    }
    else{
        cout<<"file  open success"<<endl;
        string line;
        while(!file.eof()){
            getline(file,line);
            cout<<line<<" "<<endl;
        }
    }
    file.close();
}

void CSV::deleteData()
{
    cout<<"CSV deleteData called"<<endl;
    string index,data;
    fstream file2("./personfile.csv",ios::in);
    if(!file2)
    {
        cout<<"File opening failed"<<endl;
    }
    else
    {
        cout<<"File opening is successful"<<endl;
        cout<<"Which index you want to delete"<<endl;
        cin>>index_delete;
        int index1=0;
        while(!file2.eof())
        {
            getline(file2,index);

            cout<<"index"<<index<<endl;
            if(!index.find(to_string(index_delete)))
            {
                cout<<"line found"<<endl;
            }
            else
            {
                cout<<"line not found"<<endl;
                //                index.erase(0,1);
                //                index.replace(0,1,to_string((++index1)));
                if(index.size()>0){
                    if(index.find(index_delete)){
                        data +=to_string(++index1)+index.erase(0,index.find(","))+"\n";
                    }
                }
                //                data += index + "\n";
            }
        }
        cout<<"data"<<data<<endl;
    }
    file2.close();

    fstream file3;
    file3.open("./personfile.csv",ios::out);
    if(!file3)
    {
        cout<<"File opening failed"<<endl;
    }
    else
    {
        cout<<"File3 opening is successful"<<endl;
        file3<<data;

    }
    file3.close();

}

