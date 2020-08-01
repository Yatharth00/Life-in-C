// write a program to find a-b.
#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,n;
    int count;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("enter the element in array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element in array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        count = 0;
        for ( j = 0; j < n; j++)
        {
            if(a[i]==b[j])
            {
                count = 1;
                break;
            }
            
        }
        if(count==0)
            printf("%d ", a[i]);
        
    }
}