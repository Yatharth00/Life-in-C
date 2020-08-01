// write a program to find the intersection of two array.

#include <stdio.h>
void main()
{
    int n, i,j, a[10], b[10];
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the element in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element in another array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nthe common element present in both array :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                printf("%d,", a[i]);
        }
    }
}