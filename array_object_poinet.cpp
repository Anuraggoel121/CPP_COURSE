#include<iostream>
using namespace std;
class shop
{
    private:
    int id;
    float price;
    public:
    void setData(int a , int b)
    {
        id=a;
        price=b;
    }
    void getData()
    {
        cout<<"code of this item "<<id<<endl;
        cout<<"price of this item "<<price<<endl;
    }
};

int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptr2 = ptr;
    int i;
    int p;
    float q;
    for( i=0 ; i<size ;i++)
    {
        cout<<"enter id "<<i+1<<" and price "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"item number"<<i+1<<endl;
        ptr2->getData();
        ptr2++;
    }
    return 0;
}