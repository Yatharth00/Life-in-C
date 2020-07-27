// Write a program in C to display the cube of the number upto given an integer.

#include<stdio.h>
void main()
{
    int n,cube;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        cube = i*i*i;
        printf("the cube of %d is %d:\n",i,cube);
    }
}