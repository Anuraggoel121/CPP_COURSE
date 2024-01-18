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
int main()
{
    anu <int> abj(3);
    anu<float>obj(4.1);
    abj.display();
    obj.display();
}