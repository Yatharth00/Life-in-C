// Write a program in C to find the sum of the series [ x - x^3 + x^5 - ......].

#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,i,k=1;
    int sum = 0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for ( i = 1; i <= n;i++)
    {
        sum = sum + pow(-1,i+1)*pow(x,k);
        k=k+2;
    }
    printf(":%d",sum);
}