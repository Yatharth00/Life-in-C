// Write a C program to compute the sum of the three given integers. However,
//  if any of the values is in the range 10..20 inclusive then that value counts as 0, 
//  except 13 and 17

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=10&&a<=20)
    { 
    a=0;
    printf("the sum is %d",a+b+c);
    }
    else if(b>=10&&b<=20)
    { 
    b=0;
    printf("the sum is %d",a+b+c);
    }
    else if((a>=10&&a<=20)&&(b>=10&&b<=20))
    {
        a=0;b=0;
        printf("the sum is %d",a+b+c);
    }
    else if(a==13||a==17&&b==17||b==13)
    {
        printf("the sum is %d",a+b+c);
    }
    