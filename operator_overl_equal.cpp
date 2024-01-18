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
    bool operator==(demo bb)
    {
        if(x==bb.x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    demo aa,bb;
    aa.get_data();
    bb.get_data();
    if(aa==bb)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"unequal";
    }
}
