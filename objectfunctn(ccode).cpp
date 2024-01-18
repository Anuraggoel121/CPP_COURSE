// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
   int i,d,rem;
   double bin=0;
    printf("enter the binary nuumber");
    scanf("%d",&d);
    i=-1;
    while(d!=0)
    {
        rem%=10;
        bin+=rem*pow(2,i);
        d/=10;
        i++;
    }
    printf("%lf",bin);

    return 0;
}