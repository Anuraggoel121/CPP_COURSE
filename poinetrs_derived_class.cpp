#include<iostream>
using namespace std;
class base
{
    public:
    int var_base;
    void show()
    {
        cout<<"display base class var is "<<var_base<<endl;
    }
};
class derived : public base
{
    public:
    int var_derived;
    void show()
    {
        cout<<"display base class var is "<<var_base<<endl;
        cout<<"display derived class var is "<<var_derived<<endl;
    }
};
int main()
{
    base * base_class_pointer;
    base obj_base;
    derived obj_Derived;
    base_class_pointer = &obj_Derived;  //pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
   // base_pointer->var_derived = 99;  -> give an eror
    base_class_pointer->show();
   // (*base_pointer).var_base=34;
    //(*base_pointer).show();
    derived * derived_pointer;
    derived_pointer = & obj_Derived;
    derived_pointer->var_derived = 66;
    derived_pointer->show();
    return 0;
}