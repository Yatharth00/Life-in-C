// Write a C program to check if two given non-negative integers have the same last digit

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    if(a%10==b%10)
    {
        printf("yeahh!!!! they have same last digit");
    }
    else
    {
        printf("Not same digit");
    }
    
}