#include<iostream>
using namespace std;

class base1
{
    private:
    int d1;
    public:
    base1(int i)
    {
        d1=i;
        cout<<"b1 constructor called"<<endl;
    }
    void printnumberb1()
    {
        cout<<"the value of b1 is "<<d1<<endl;
    }
};

class base2
{
    private:
    int d2;
    public:
    base2(int j)
    {
        d2=j;
        cout<<"base2 constructor called"<<endl;
    }
    void printnumberb2()
    {
        cout<<"the value of b2 is "<<d2<<endl;
    }
};
class derived : public base1, public base2
{
    int de1,de2;
    public:
    derived(int a,int b, int c,int d) : base1(a),base2(b)
    {
        de1=c;
        de2=d;
    }
    void printdataderived(void)
    {
        cout<<"the value of de1 is"<<de1<<endl;
        cout<<"the value of de2 is"<<de2<<endl;
    }
};
int main(){
    derived anu(1,2,3,43);
    anu.printdataderived();
    anu.printnumberb2();    
    return 0;
}