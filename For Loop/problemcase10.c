
// Write a program in C to check Armstrong number of n digits.

#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,r,sum=0,count=0;
    printf("ENter the number\n");
    scanf("%d",&n);
    int c=n;
    int b=c;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    while (c>0)
    {
        r = c%10;
        sum  = sum + pow(r,count);
        c=c/10;
    }
    if(sum == b)
        printf("Armstrong number");
    else
        printf("Not armstrong no");
    
}