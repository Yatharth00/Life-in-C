//  Write a program in C to print the Floyd's Triangle
#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for (j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
        
    }
}