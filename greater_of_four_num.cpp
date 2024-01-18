#include <iostream>
#include <cstdio>
using namespace std;
void max_of_four(int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)
    {
        cout<<a<<endl;
    }
    if(b>a&&b>c&&b>d)
    {
        cout<<a<<endl;
    }
    if(c>a&&c>b&&c>d)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<d<<endl;
    }
}

int main()
{
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    max_of_four(a,b,c,d);
    return 0;
    
    
}















// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int a,b;
//     int n=1;
//     cin>>a;
//     cin>>b;
//     for(n=1;n<=9;n++)
//     {
//     if(a<=n && b>=n)
//     {
//         if(n==1)
//         {
//             printf("one");
//         }
//         if(n==2)
//         {
//             printf("two");
//         }
//         if(n==3)
//         {
//             printf("three");
//         }
//         if(n==4)
//         {
//             printf("four");
//         }
//         if(n==5)
//         {
//             printf("five");
//         }
//         if(n==6)
//         {
//             printf("six");
//         }
//         if(n==7)
//         {
//             printf("seven");
//         }
//         if(n==8)
//         {
//             printf("eight");
//         }

//     }
//     if(n>9)
//     {
//         if(n%2==0)
//         {
//             printf("even");
//         }
//         else
//         {
//             printf("odd");
//         }
//     }
//     }
// }
