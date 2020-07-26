//  Write a C program to check whether a given positive number is a 
//  multiple of 3 or a multiple of 7

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
    {
        printf("Multiple!!!!");
    }
    else
    {
        printf("Not a Multiple of 3 or 7");
    }
    
}