#include<iostream>
using namespace std;
int & swap(int &a,int &b){  //a  b   c  
    int c = a;              //4   4    5
    a = b;                  //4   5    5
    b = c;                  //4   5    4
    return  a;
}

int main(){
    int x = 4 , y= 5;
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    swap reference var(x ,y)= 444;
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    return 0;
}