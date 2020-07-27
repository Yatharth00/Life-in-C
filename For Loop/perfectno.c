//  Write a c program to check whether a given number is a perfect number or not.
#include<stdio.h>
void main()
{
    int n,r,sum=0,i;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i = 1; i <n; i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        sum=sum+i;
        }
    }
    
    if(sum==n)
    {
        printf("\n the sum of factor of number is equal to the orignal number therfore perfect number");
    }
    else
    {
        printf("the sum of factor of number is not equal to the orignal number therfore not a perfect number");
    }
    
    
}