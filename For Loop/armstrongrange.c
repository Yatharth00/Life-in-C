//  Write a C program to find the Armstrong number for a given range of number.

#include<stdio.h>
void main()
{
    int i,j,r,sum,temp,temp1;
    for ( i = 1; i <1000; i++)
    {
        temp=i;
        sum=0;
        while (temp>0)
        {
            r= temp%10;
            sum= sum + r*r*r;
            temp=temp/10;

        }
        if(sum==i)
        {
            printf("%d,",i);
        }
    }
    
}