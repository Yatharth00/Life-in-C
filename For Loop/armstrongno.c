// write a program to check whether 153 is aramstrong or not
#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the value \n");
    scanf("%d",&n);
    int c=n;
    while(n>0)
    {
        int r= n%10;
        sum= sum + r*r*r;
        n=n/10;


    }
    if(sum==c)
    {
        printf("Armstrong number");

    }
    else
    {
        printf("Not armstrong no");
    }
    
}