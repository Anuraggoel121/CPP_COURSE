#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"enter value of a "<<endl;
    cin>>a;
    cout<<"enter value of b "<<endl;
    cin>>b;
    cout<<endl;
    int * ptr = &a;
    cout<<ptr<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of b is "<<&b<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    return 0;
}
