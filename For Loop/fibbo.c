// Write a program in C to display the first n terms of Fibonacci series.

#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    for (i = 1; i <= n-2; i++)
    {   
        c=a+b;
        a=b;
        b=c;
        printf("%d,",c);
    }
    
}