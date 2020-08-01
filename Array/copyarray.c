// Write a program in C to copy the elements of one array into another array

#include<stdio.h>
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9};
    int i,b[10];
    for ( i = 0; i < 9; i++)
    {
        b[i]=a[i];
        printf("%d",b[i]);
    }
}
    