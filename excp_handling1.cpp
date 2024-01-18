#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    try
    {
        if(b!=0 && a>b)
        {
            c=a/b;
            cout<<"Divisor = "<<c;
        }
        if(b>a && b!=0)
        {
            c=b/a;
            cout<<"Divisor = "<<c;
        }
        else
        {
            throw(b);
        }
    }
    catch(int b)
    {
        cout<<"Divide by "<<b<<" not possible.";
    }
};