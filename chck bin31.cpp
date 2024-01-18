#include<stdio.h>
int main()
{ int num[1000],n,i,j;
 printf("enter the no.of digits in number\n");
 scanf("%d",&n);
 for(i=0;i<n-1;i++)
 {
     scanf("%d\n",&num[i]);
 }
     for(j=0;j<n-1;j++)
     {
         if(num[i]!=1&&num[i]!=0)
 {
     printf("entered format is not correct");
 }
         
 printf("%d",num[j]);
     }
   
    
}