// #include<iostream>
// using namespace std;
// void swap(int*a,int*b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
// int main(){
//     int x = 4 ,y = 5;
//     cout<<"value of x is "<<x<<endl;
//     cout<<"value of y is "<<y<<endl;
//     swap(x,y);
//     cout<<"value of x is "<<x<<endl;
//     cout<<"value of y is "<<y<<endl;
//     return 0;
// }


//        using refrence variable to swap //



#include<iostream>
using namespace std;

void swapRefrencevar(int &a, int &b)
{                         //  c   a    b
    int c=a;              //  4   4   5
    a=b;                  //  4   5   5
    b=c;                  //  4   5   4
}

int main()
{
    int x=4,y=5;
    cout<<"value of x is "<<x<<"value of y is "<<y<<endl;
    swapRefrencevar(x,y);
    cout<<"value of x is "<< x <<"value of y is "<< y <<endl;
    int q,w;
    cout<<"enter value of q"<<endl;
    cin>>q;
    cout<<"enter value of w"<<endl;
    cin>>w;
    swapRefrencevar(q,w);
    cout<<"value of q is "<< q <<"value of w is "<< w <<endl;
}