// Write a C program to reverse a given array of integers and length 5. 

#include<stdio.h>
void main()
{
    int a[5] = {10,20,30,40,50};
    int i,temp;
    for(i=0;i<3;i++)
    {
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
}