#include<iostream>
using namespace std;

class y;
class X
{
    private:
    int data;

    public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};  

class Y
{
    private:
    int number;

    public:
    void setValue(int value)
    {
        number = value;
    }
};

void add(X o1, Y o2)
{
    cout<<"summing data of X and Y objects gives me "<<o1.data + o2.number<<endl;

}

int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
    add(a1,b1);


}
