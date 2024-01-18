// #include<iostream>
// #include<math.h>
// using namespace std;
// class bankdeposit
// {
//     public:
//     int principal;
//     int years;
//     float returnvalue;
//     float intrestrate;
//     public:
//     bankdeposit(){};
//     bankdeposit(int p,int y,float r);
//     bankdeposit(int p,int y,int r);
//     void show();
// };
//     bankdeposit :: bankdeposit(int p,int y,float r)
//     {
//         principal=p;
//         years=y;
//         intrestrate=r;
//         returnvalue=principal;
//         for(int i=0;i<y;i++)
//         {
//             returnvalue = returnvalue * (1+intrestrate);

//         }
//     }
//     bankdeposit :: bankdeposit(int p,int y,int r)
//     {
//         principal=p;
//         years=y;
//         intrestrate=float(r)/100;
//         returnvalue=principal;
//         for(int i=0;i<y;i++)
//         {
//             returnvalue = returnvalue * (1+intrestrate);

//         }
//     }
//     void bankdeposit :: show()
//     {
//         cout<<"principal amount was "<<principal
//         <<"return amount after "<<years
//         <<"year is "<<returnvalue<<endl;
//     }



// int main(){
//     bankdeposit bd1,bd2,bd3;
//     int p,y,R;
//     float r;
//     cout<<"enter value of p,yand r"<<endl;
//     cin>>p>>y>>r;
//     bd1=bankdeposit(p,y,r);
//     bd1.show();

    
//     return 0;
// }



#include<iostream>
using namespace std;


class BankDeposit{
    private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
     BankDeposit(){} //in main function this function call  (it is called blank constructor)
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue + (principal*years*interestRate/100);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}
int main(){
   BankDeposit bd1,bd2,bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
     bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}

