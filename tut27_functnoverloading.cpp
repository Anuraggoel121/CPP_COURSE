// OVER LOADING - HAVE SAME FUNCTION NAME 

#include<iostream>
using namespace std;
int add ( int a , int b)
{
    cout<<"the sum of a and b is "<<(a+b);

}
int add ( int a ,  int b , int c){
    cout<<"the sum of a,b,c "<<(a+b+c);
}

 main(){
    int a , b ,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a;cin>>b;
    cin>>c;
    //add(a,b);
   // add(a,b,c);
    
   // cin>>a;cin>>b;cin>>c;
  //   addition(a,b,c);

   // cout<<"the sum of 3 and 5 is "<<a+b<<endl;
  //  cout<<"the sum of 3 ,7 and 5 is "<<a+b+c<<endl;
    return 0;
}