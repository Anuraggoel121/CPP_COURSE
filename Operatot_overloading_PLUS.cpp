// OPERATOR OVERLOADING IS THAT IF WE WANT TO USE ANY OPERATOR 
//ACCORDING TO OUR USE eg- + operator is built in data type
// it didnt add object ,but if we want to add object using 
//+operator then we need to overload +operator according to
//our confinence.
// USE THIS CODE FOR ANY OPERATOR(ARITHMETIC).
#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter no. : ";
        cin>>a;
    }
    void put_data()
    {
        cout<<"Value = "<<a<<endl;
    }
    demo operator+(demo bb)   //cc=aa+bb;
    {
        demo cc;
        cc.a=a+bb.a;
        return cc; 
    }
}; 
int main()
{
    demo aa,bb,cc;
    aa.get_data(); 
    bb.get_data();
    cc=aa+bb; 
    cc.put_data();
}