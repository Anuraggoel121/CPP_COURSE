#include<iostream>
using namespace std;
template<class t1=int , class t2=float , class t3=char> // initialized data-type here.
class anurag
{
    public:
    t1 a;
    t2 b;
    t3 c;
    anurag(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
int main()
{
    anurag<> obj(2,2.3,'c'); //  class template with default parameter
    obj.display();
    anurag<float , char , int> obj1(2.1,'b',22);
    obj1.display();
}