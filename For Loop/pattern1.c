// Write a program in C to make such a pattern like right angle triangle with number increased by 1. 

#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
}