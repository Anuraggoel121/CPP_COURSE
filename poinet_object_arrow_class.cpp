#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imaginary;
    public:
    void setdata(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    void getdata()
    {
        cout<<"real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
    }
};

/*  1st method to access public object using pointer
//int main()
//{
//     complex c1;
//     complex *ptr = &c1;
//     (*ptr).setdata(1,2);
//     (*ptr).getdata();
//     return 0;
// }
*/

//2nd method to access

int main()
{
    complex *ptr = new complex;
    (*ptr).setdata(1,2);
    (*ptr).getdata();
    complex *p = new complex;
    p->setdata(3,4);
    p->getdata();
    return 0;
}