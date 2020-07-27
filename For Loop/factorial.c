// Write a C program to calculate the factorial of a given number.

#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    for(i=1;i<=n;i++)
    {
        
        fact = fact*i;
    }
    printf("%d",fact);
}