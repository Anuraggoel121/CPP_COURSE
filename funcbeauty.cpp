#include<iostream>
using namespace std;

void even(int a)
{
    if(a%2==0)
    {
        cout<<"number is even"<<endl;
    }
    else
    {
        cout<<"number is odd"<<endl;
    }
}

int main()
{
    int a;
    int b;
    cout<<"enter a"<<endl;
    cin>>a;
    even(a);
    cout<<"enter b"<<endl;
    cin>>b;
    even(b);


}