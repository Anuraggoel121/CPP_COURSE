/*
TEMPLATE IS SIMPLE AND POWERFUL TOOL.SIMPLE IDEA IS TO PASS DATA TYPE AS 
AS A PARAMETER SO THAT WE DID NOT WRITE THE SAME CODE FOR DIFFERNT
DATA TYPES.
For example, a software company may need to sort() for different data types. 
Rather than writing and maintaining multiple codes, we can write one sort() 
and pass the datatype as a parameter.
*/
#include<iostream>
using namespace std;
template<class T>
//template<typename T> // this also execute
void Swap(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    int c=2,d=3;
    cout<<c<<" - "<<d<<endl;
    Swap<int>(c,d);
    cout<<c<<" - "<<d<<endl;
    char e='e',f='f';
    cout<<e<<" - "<<f<<endl;
    swap<char>(e,f);
    cout<<e<<" - "<<f<<endl;
}