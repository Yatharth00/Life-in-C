// Write a program in C to accept two matrices and check whether they are equal.
#include<stdio.h>
void main()
{

int a[3][3],b[3][3],m=0;
    int i,j;
    printf("Enter the value in first matix");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the values in other matix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(a[i][j]==b[i][j])
                m=1;
        }
    }
    if(m==1)
    {
        printf("yes they are equal");

    }
    else
    {
        printf("No they are not equal");
    }
}