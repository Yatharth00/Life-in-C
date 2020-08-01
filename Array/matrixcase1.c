// Write a program in C for a 2D array of size 3x3 and print the matrix.

#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    printf("Enter the element in array");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }

    
}