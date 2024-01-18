#include<iostream>
using namespace std;
class point
{
    private:
    int a,b;
    public:
    point(int x, int y)    // declared constructor
    {
        a=x;
        b=y;
        cout<<"hello world "<<endl;
    } 
    point(int x)            //constructors overloading
    {
        a=x;
        b=0;
    }
    point()                 //constructors overloading
    {
        a=0;
        b=0;
    }
    void printnumber()
    {
        cout<<"the point is ("<<a<<","<<b<<")"<<endl;
    }
};

int main(){
    point p(6,7);
    p.printnumber();
    point r(7,9);
    r.printnumber();
    point q(3);
    q.printnumber();
    point u;
    u.printnumber();
    

    
    return 0;
}