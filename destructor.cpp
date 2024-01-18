#include<iostream>
using namespace std;
class demo
{
    int count =0;
    public:
    demo()
    {
        count++;
        cout<<"No. Of Object Created : "<<count<<endl;
    }
    ~demo()
    {
        count--;
        cout<<"No. Of Object Destroyed : "<<count<<endl;
    }
};
int main()
{
    demo a,b,c,d;
    {
       demo e;
    }
    return 0;
}