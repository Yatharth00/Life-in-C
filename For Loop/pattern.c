// Write a program in C to display the pattern like right angle triangle using an number
#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",i);    //for increasing no print j and for * print("*") 
        }
        printf("\n");
    }
    
}