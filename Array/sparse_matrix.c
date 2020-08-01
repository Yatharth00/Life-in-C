// write a program to convert sparse matrix into triplet represetation.
#include <stdio.h>
void main()
{
    int a[5][5], i, j, m, n, nz=0;
    printf("Enter the no of rows of array\n");
    scanf("%d", &m);
    printf("Enter the no of column of array\n");
    scanf("%d", &n);
    printf("enter the element in array\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Sparse matrix \n");
    printf("-----------------\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
                nz++;
        }
    }
    int sparse[nz + 1][3];
    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = nz;
    int x = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                sparse[x][0] = i;
                sparse[x][1] = j;
                sparse[x][2] = a[i][j];
                x++;
            }
        }
    }
    printf("Triplet representation\n");
    printf("------------------------\n");
    for ( i = 0; i < (nz+1); i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }
}
    
    