// Write a program in C to find sum of rows an columns of a Matrix.
#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,rsum,csum;
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
    printf("the sum of each row\n");
    for ( i = 0; i < 3; i++)
    {
        rsum=0;
        for ( j = 0; j < 3; j++)
        {
            rsum = rsum+a[i][j];
        }
        printf("%d ",rsum);
    }
    printf("\nthe sum of eachcolumn\n");
    for ( i = 0; i < 3; i++)
    {
        csum=0;
        for ( j = 0; j < 3; j++)
        {
            csum = csum+a[j][i];
        }
        printf("%d ",csum);
    }
}