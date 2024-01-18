#include<iostream>
using namespace std;
class base1
{
    int d1;
    public:
    base1(int i)
    {
        d1=i;
        cout<<"b1 constructor called"<<endl;
    }
    void print(void)
    {
        cout<<"the value of b1 is "<<b1<<endl;
    }
};

class base2
{
    int d2;
    public:
    base1(int q)
    {
        d2=q;
        cout<<"b2 constructor called"<<endl;
    }
    void print(void)
    {
        cout<<"the value of b2 is "<<b2<<endl;
    }
};

class derived  : public base1 , public base2
{
    
}

int main(){
    
    return 0;
}