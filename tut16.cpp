#include<iostream>
using namespace std;

int main(){
    int a=3;
    int*b = &a;
    cout<<b<<endl;
    cout<<*b<<endl;
    return 0;
}