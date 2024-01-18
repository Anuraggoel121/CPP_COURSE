#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imaginary;
    public:
    void setdata(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    void getdata()
    {
        cout<<"real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
    }
};
    int main()
{
    complex *ptr = new complex;
    (*ptr).setdata(3,4);
    (*ptr).getdata();
    complex *p = new complex;
    p->setdata(5,6);
    p->getdata();
    complex root;
    root.setdata(6,7);
    root.getdata();



}