#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
    int i;
    int N;
    cin>>N;
    int A[N];
    int sum = 0;
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    if(sum%2==0)
    {
        cout<<abs(sum/2)<<endl;
    }
    else if(sum%2!=0)
    {
       cout<<"-1"<<endl;
    }
}
}