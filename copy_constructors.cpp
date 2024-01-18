#include<iostream>
using namespace std;
class number
{
    private:
    int a;
    public:
    number()
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    number(number &t)
    {
        cout<<"copy constructor used "<<endl;
        a=t.a;
    }
    void display()
    {
        cout<<"no.of object is "<<a<<endl;
    }

};

int main(){
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();

    return 0;
}