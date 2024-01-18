#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int  ,int );  //constructor declared
    void printnumber()
    {
        cout<<"your numebr is "<< a << " + "<< b << " i "<<endl;
    }
};
// complex::complex(void)   //default constructors(as it didnt take any parameter).
// {
//     a=10;
//     b=0;
// }
complex::complex(int x ,int y)  //parametried constructors (as it take parameter).
{
    a=x;
    b=y;


}
int main()
{
    complex c(4,5);
    c.printnumber();   
    complex d(7,8);
    d.printnumber();
}