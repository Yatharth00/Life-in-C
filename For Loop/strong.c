// Write a C program to check whether a number is a Strong Number or not

#include<stdio.h>
void main()
{
    int n,i,sum,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        int r = n%10;
        sum = sum+factorial(r);
        n=n/10;

    }
    if(sum==c)
    {
        printf("strong number");

    }
    else
    {
        printf("weak number");
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