#include<iostream>
using namespace std;
template<class t>
class anu
{
    private:
    t data;
    public:
    void display();
    anu(t a)
    {
        data = a;
    }
};
template<class t> // using scope resolution in template.
void anu<t>:: display()
    {
        cout<<data<<endl;
    }
template<class t>
void func( t a)
{
    cout<<"template function called "<<a<<endl;
}
/*
without template function we create.
*/
void func( int a)
{
    cout<<"Simple function called "<<a<<endl;
}

int main()
{
    func<int>(4);// exact match take higher priority.
    func(4);// exact match take higher priority.
}