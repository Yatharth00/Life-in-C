// Write a C program to create a new array containing the middle elements 
// from the two given arrays of integers, each length 5.

#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int b[5] = {60,70,80,90,100};
    int c[3];
    int i=0;
    c[0] = a[5/2];
    c[1] = b[5/2];
    for(i=0;i<2;i++)
    {
        printf("%d\t",c[i]);
    }
    
}