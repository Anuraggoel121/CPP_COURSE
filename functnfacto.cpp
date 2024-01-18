#include<iostream>
using namespace std;

void facto(int a)
{
    int factorial=1;
    while(a!=0)
    {
        factorial=factorial*a;
        a--;
    }
    cout<<"factorial is "<<factorial<<endl;
 }


 int main()
 {
    int a;
    int b;
    int c;
    cout<<"enter the number of which you want factorial"<<endl;
    cin>>a;
    facto(a);
    cout<<"enter the number of which you want factorial"<<endl;
    cin>>b;
    facto(b);
    cout<<"enter the number of which you want factorial"<<endl;
    cin>>c;
    facto(c);

 }


