// Write a C program to check a given array of integers of length 3 and create a  new array.
// If there is a 5 in the given array immediately followed by a 7 then set 7 to 1. 

#include<stdio.h>
void main()
{
    int a[3] = {1,5,7};
    int b[3];
    for(int i=0;i<3;i++)
    {
        if(a[i]==5&&a[i+1]==7)
        a[i+1]=1;
    }
    for (int i = 0; i < 3; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i < 3; i++)
    printf("%d\t",b[i]);
    

}