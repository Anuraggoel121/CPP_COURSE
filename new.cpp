//this is a comment
/*

inhe
*/

//---------------------------------------------

/*
1) REFRENCE
2) address usage
3) constructor use and object
4) usage of protected or public and usage 

*/
//#include<iostream>
//#include<cstring>
// using namespace std;
// void swap (int a , int b)
// {
//     int c= 0;
//     c = a;
//     a = b;
//     b = c;
// }
// int main()
// {
//  int x,y;
//  cout<<"enter value of x "<<x<<endl;
//  cout<<"enter value of y "<<y<<endl;
//  swap(x,y);
//  cout<<"new value of x "<<x<<endl;
//  cout<<"new value of y "<<y<<endl;
// }

// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//     abs(int a , int b)
//     {
//         cout<<"value of a "<<a<<endl;
//         cout<<"value of b "<<b<<endl;
//     }
// }

// int main(){
//     class anurag;
//     anurag.abs(2,3);
//     return 0;
// }
 #include<iostream>
 using namespace std;
 class school
 {
    protected:
    int a , int b;
    public:
    void getdata(int a = 2, int b = 4)
    {
        cout<<" value of a "<<a<<endl;
        cout<<" value of b "<<b<<endl;
    }
 };
 class class  : public school
 {
    protected:
    int q,w;
    public:
    void display()
    {
        getdata();
        cout<<"this is inherit class "<<endl;
    }
 }
 
 int main(){
    
    
    return 0;
 }