//  Write a C program to check which number nearest to the value 100 among two given integers. 
//  Return 0 if the two numbers are equal.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    int c = nearest(a,b);
    printf("%d",c);
}
int nearest(int a,int b)
{
    if(100-a<100-b)
    {
        return a;
    }
    else if(100-a>100-b)
    {
        return b;
    }
    else
    {
        return 0;
    }
    
}