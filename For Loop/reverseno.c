//  Write a program in C to display the number in reverse order

#include<stdio.h>
void main()
{
    int n,r,s=0;
    printf("ENter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}