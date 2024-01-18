#include<iostream>
using namespace std;

class Employee
{
    private:
    int a, b , c;
    public:
    int d, e;
    void setdata(int a1 , int b1 , int c1);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }  
};
 void Employee :: setdata(int a1 ,int b1 , int c1)
 {
    a = a1;
    b = b1;
    c = c1;
 }
int main(){
    Employee harry;
    cout<<"harry"<<endl;
    harry.d = 34;
    harry.e = 55;
    harry.setdata(1,2,3);
    harry.getdata();
    Employee ram;
    cout<<"ram"<<endl;
    ram.d=55;
    ram.e=77;
    ram.setdata(3,4,5);
    ram.getdata();
    return 0;
}