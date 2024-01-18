#include<iostream>
using namespace std;
class anu
{
    private:
    int a;
    public:
    anu (int num)
    {
        a=num;
    }
    // anu (anu &x) // copy constructor syntax
    // {
    //     cout<<"COPY CONSTRUCTOR CALLED"<<endl;
    //     a=x.a;
    // }
    // IF WE DIDNT USE THIS THEN OUR CODE EXECUTE AS COMPILER MAKE DEFAULT
    // CONSTRUCTOR .
    /*BUT OUR COUT MATERIAL CANT PRINT*/
    anu()
    {
        a=0;
    }
    void display()
    {
        cout<<"no, is "<<a<<endl;
    }

};
int main()
{
    anu x,y,z(66),Z2;;
    x.display();
    anu x1(z);  //  copy constructor INVOKED
    x1.display();
    y.display();
    z.display();

   // Z2=z;  // COPY CONTRUCTOR CAN NOT BE INVOKED
    
    
}
