#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age "<<endl;
    cin>> age;
    if(age<18){
        cout<<"you are not allowed in party"<<endl;
    }
    else if(age>18){
        cout<<"you are allowed in party"<<endl;
    }
    else{
        cout<<"you are allowed with parents"<<endl;
        }
    return 0;
}
