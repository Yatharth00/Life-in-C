// WAP to find the union of two array.

#include <stdio.h>
void main()
{
    int n, i, j, k, a[10], b[10], c[10];
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the element in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int m = 2 * n;
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        c[i + n] = b[i];
    }
    for (i = 0; i < m; i++)
    {
        printf("%d ", c[i]);
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m;j++)
        {
            if (c[i] == c[j])
            {
                for (k = j; k < m; k++)
                {
                    c[k] = c[k + 1];
                }
                m--;
            }
        }
    }
    printf("\n\nthe union of two array is:");
    for ( i = 0; i < m; i++)
    {
        printf("%d ", c[i]);
    }
}