#include<iostream>
#include<cmath>
using namespace std;
// declaring first class
class simple
{
    protected:
    int x,y;
    public:
    void get_simple(void);
    void set_simple(int a,int b);
};
void simple :: set_simple(int a,int b)
{
    x=a;
    y=b;
}
void simple ::  get_simple()
{
    cout<<"enter value of x : "<< endl;
    cin>>x;
    cout<<"enter value of y : "<< endl;
    cin>>y;
    cout<<"the subtraction od a and b is :"<<x-y<<endl;
    cout<<"the multiplication od a and b is :"<<x*y<<endl;
    cout<<"the addition od a and b is :"<<x+y<<endl;
}
// declaring second class

class scientific
{
    protected:
    int q,w;
    public:
    void get_data(void);
    void set_data(int c,int d);
};
void scientific :: set_data(int c,int d)
{
    q=c;
    w=d;
}
void scientific :: get_data()
{
    cout<<"enter value of q : "<< endl;
    cin>>q;
    cout<<"enter value of w : "<< endl;
    cin>>w;
    cout<<"the square root of c is :"<<sqrt(q)<<endl;
    cout<<"the multiplication of d is :"<<sqrt(w)<<endl;
}
// using inheritance 
 class hybrid : public simple , public scientific
 {
    public:
    void show()
    {
        cout<<"class will be inherited "<<endl;
        get_simple();
        get_data();
    }
 };

 int main()
 {
    hybrid anu;
    anu.show();
    return 0;
 }



