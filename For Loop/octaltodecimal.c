// Write a program in C to convert an octal number to a decimal.

#include<stdio.h>
#include<math.h>
void main()
{
    int n,r;
    int sum=0,i=0;
    printf("ENter the number\n");
    scanf("%d",&n);
    while (n>0)
    {
        r = n%10;
        sum = sum + pow(8,i)*r;
        i++;
        n=n/10;

    }
    printf("%d",sum);
    
}