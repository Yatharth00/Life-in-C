//  Write a C program that accept two integers and 
//  return true if either one is 5 or their sum or difference is 5

#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    int c = condition(a,b);
    printf("%d",c);
}
int condition(int a,int b)
{
    int sum=0;
    sum=a+b;
    if(a==5||b==5||a-b==5||a+b==5)
    {
        return 1;
    }
}