#include<iostream>
using namespace std;
class base
{
    public:
    int var_base = 8;
    virtual void show()
    {
        cout<<"1 display base class var is "<<var_base<<endl;
    }
};
class derived : public base
{
    public:
    int var_derived = 9;
    virtual  void show()
    {
        cout<<"2 display base class var is "<<var_base<<endl;
        cout<<"2 display derived class var is "<<var_derived<<endl;
    }
};
int main()
{
    base * base_pointer;
   // base obj_base;
    derived obj_derived;
    base_pointer = & obj_derived;
    //base_pointer = & obj_base;
    base_pointer->show();
}