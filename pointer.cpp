#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int* b=&a;
    cout<<"adress of a is "<<&a<<endl;
    cout<<"adress of a is "<<b<<endl;
    cout<<"the value of adress of b is "<<*b<<endl;
    cout<<"the value of adress of a is "<<*b<<endl;
}  