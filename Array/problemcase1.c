// Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9};
    int i;
    for(i=8;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}