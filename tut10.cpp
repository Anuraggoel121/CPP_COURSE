#include<iostream>
using namespace std;
int main(){
    int a= 45;
    float b=67.89;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<"the expression is"<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    return 0;
}