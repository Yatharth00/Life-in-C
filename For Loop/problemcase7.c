// Write a program in C to display the n terms of square of natural number and their sum.

#include<stdio.h>
void main()
{
    int n,i;
    int sum =0 ;
    printf("enter the number of terms");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\t",i*i);
        sum = sum + i*i;
    }
    printf("\n%d",sum);
}