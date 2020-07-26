// Write a C program to find the larger value from two positive integer values 
// that is in the range 20..30 inclusive,
// or return 0 if neither is in that range.

#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    int c = rangewithlarger(a,b);
    printf("%d",c);
}
int rangewithlarger(int a,int b)
{
    if(a>=20&&a<=30&&b>=20&&b<=30)
        if(a>b)
            return a;
        else
            return b;
    else
    {
        return 0;
    }
    
}