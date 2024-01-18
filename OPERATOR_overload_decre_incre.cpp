#include<iostream>
using namespace std;
class deno
{
    int x;
    public:
    void get_data()
    {
        cout<<"Enter no : ";
        cin>>x;
    }
    void put_data()
    {
        cout<<"Value = "<<x;  //++aa
    }
   /* void operator++()
    {
        x=x+1;
    }
    */
    void operator++(int)
    {
        x=x+1;
    } 
};
int main()
{
    deno aa;
    aa.get_data();
    cout<<"Original ";
    aa.put_data();
    //++aa;
    aa++;
    cout<<"\nValue after increment ";
    aa.put_data();
}