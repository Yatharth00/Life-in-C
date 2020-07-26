//  Write a C program to check three given integers (small, medium and large) and 
//  return true if the difference between small and 
//  medium and the difference between medium and large is same

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENter the numbers");
    scanf("%d %d %d",&a ,&b ,&c);
    int x = acase(a,b,c);
    printf("%d",x);
}
int acase(int a,int b,int c)
{
    if (a>b&&a>c&&b>c)
        return a-b==b-c;
    if (a>b&&a>c&&c>b)
        return a-c==c-b;
    if (b>a&&b>c&&a>c)
        return b-a==a-c;
    if (b>a&&b>c&&c>a)
        return b-c==c-a;
    if (c>a&&c>b&&b>a)
        return c-b==b-a;
    if (b>a&&b>c&&a>c)
        return b-a==a-c;
    
}