#include<iostream>
using namespace std;
class demo
{
    int x;
    public:
    void get_data()
    {
        cout<<"Enter no : ";
        cin>>x;
    }
    void put_data()
    {
        cout<<"Value = "<<x;  
    }
    void operator=(demo bb) //aa=bb
    { 
        x=bb.x;   //means insert aa.x into bb.x
    }
};
int main()
{
    demo aa,bb;
    bb.get_data();
    bb.put_data();
    aa=bb;
    cout<<"\nUpdated ";
    aa.put_data();
}