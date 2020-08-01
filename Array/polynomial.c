// write to program to represent polynomial expression.

#include <stdio.h>
void main()
{
    int a[100],b[100], i, n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the coffecients in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the exponent in array respectively\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        
        printf("%dx^%d+",a[i],b[i]);
    }
    printf("%dx^%d",a[n-1],b[n-1]);
}
