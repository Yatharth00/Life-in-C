// Write a program in C to find transpose of a given matrix

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
    printf("transpose of matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
    printf("\n");
    }
    printf("orignal matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }

    
}