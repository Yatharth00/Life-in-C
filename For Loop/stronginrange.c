// Write a C program to find Strong Numbers within a range of numbers.
#include<stdio.h>
void main()
{
    int i,r,sum,j,temp;
    for ( i = 1; i <=1000; i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            r = temp%10;
            sum = sum + factorial(r);
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d,",i);
        }
    }
    
}
int factorial(int r)
{
    int fact=1;
    for(int i=1;i<=r;i++)
    {
        fact = fact*i;
    }
    return fact;
}