// Write a C program to determine whether a given number is prime or not.

#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
    {
        printf("Prime number");

    }
    else
    {
        printf("Not a prime no");
    }
    
    
}