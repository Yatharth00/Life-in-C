// Write a C program to compute the sum of the two given integers. 
// If the sum is in the range 10..20 inclusive return 30.

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    c=suminrange(a,b);
    printf("%d",c);
}
int suminrange(int a,int b)
{
    int sum=0;
    sum=a+b;
    if(sum>=10&&sum<=20)
    {
        return 30;
    }
}