#include<iostream>
using namespace std;
int c = 45; 
int main(){
    int a,b,C;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b; 
    C = a+b;
    cout<<"the sum is "<<::c;
    //cout<<"the global c is"<<::c; 
    return 0;
}