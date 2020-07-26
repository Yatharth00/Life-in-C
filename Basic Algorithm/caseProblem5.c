// Write a C program to compute the sum of values in a given array
//  of integers except the number 17.

#include<stdio.h>
void main()
{
    int a[5] = {1,2,3,4,17};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]!=17)
        {
            sum = sum+a[i];

        }
        else
        {
            sum = sum+a[i]-17;
        }
        
    }
    printf("%d",sum);
}