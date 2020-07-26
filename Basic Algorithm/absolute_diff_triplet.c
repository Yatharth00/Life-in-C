//Write a C program to get the absolute difference between n and 51.
// If n is greater than 51 return triple the absolute difference

#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter the number");
    scanf("%d",&n);
    c = absolute_diffrence(n);
    printf("%d",c);
}
int absolute_diffrence(int n)
{
    if(n>51)
    {
        return (n-51)*3;
    }
    else
    {
       return 51-n;
    }
}