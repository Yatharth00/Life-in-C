// Write a program in C to print or display the lower triangular of a given matrix.
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
    printf("original matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("lower triangular\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(i>j)
            {
                a[i][j]=0;
            }
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