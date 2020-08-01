// WAP to insert element at beginnig of array.
#include <stdio.h>
void main()
{
    int a[10], i, n, m;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you wanna insert at begning\n");
    scanf("%d", &m);

    int temp = a[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = m;

    printf("New array after insertion at begning\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}