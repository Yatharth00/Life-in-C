// Write a C program to rotate the elements of a given
//  array of integers (length 4 ) in left direction and return the new array

#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40};
    int temp;
    temp=a[0];
    for(int i=0;i<3;i++)
    {
        a[i]=a[i+1];
    }
    a[3]=temp;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",a[i]);
    }
}