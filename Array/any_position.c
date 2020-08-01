// WAP to insert element in any position in array.

#include<stdio.h>
void main()
{
    int n, a[10], i, m,pos;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the pos you wanna insert\n");
    scanf("%d", &pos);
    printf("Enter the element you wanna insert \n");
    scanf("%d", &m);
    int temp = a[n - 1];
    for ( i = n-1; i > pos ; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = m;
    printf("the new array after insertion\n");
    a[n] = temp;
    for ( i = 0; i <=n; i++)
    {
        printf("%d ", a[i]);
    }
    
}