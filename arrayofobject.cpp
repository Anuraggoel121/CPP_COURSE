#include<iostream>
using namespace std;

class employee{
    int id;
    int sal;
public:
    void setid(void)
    {
        sal = 122;
        cout<<"enter the id of employee "<<endl;
        cin>>id;
    }

    void getid(void)
    {
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    employee SA[5];
    for(int i = 0; i < 5; i++)
    {
        SA[i].setid();
        SA[i].getid();
    }
    return 0;
}