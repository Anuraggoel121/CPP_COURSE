#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void get_data()
    {
        cout<<"Enter real and imaginary : ";
        cin>>r>>i;
    }
    void put_data()
    {
        cout<<"\n Real = "<<r<<"Imginary = "<<r<<endl;
    }
    complex operator+(complex bb)  //cc=aa+bb
    {
        complex cc;
        cc.r=r+bb.r; // as function call through aa so we didnt write
        cc.i=i+bb.i;
        return cc;
    }
};
int main()
{
    complex aa,bb,cc;
    aa.get_data();
    bb.get_data();
    cc=aa+bb;
    aa.put_data();
    bb.put_data();
    cc.put_data();
}