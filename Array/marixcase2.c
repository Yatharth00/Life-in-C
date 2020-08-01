// Write a program in C to find sum of right diagonals of a matrix

#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,sum=0;
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
    int p=0;
    int q=2;
    while(p<3&&q>=0)
    {
        sum = sum+a[p][q];
        p++;
        q--;
    }

    printf("\n the sum of right diagonal is %d",sum);
}