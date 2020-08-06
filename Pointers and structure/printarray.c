// Write a program in C to store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main()
{
    int a[10],i,*p;
    printf("Enter the element in array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    for ( i = 0; i < 10; i++)
    {
        printf("%d  ", *(p + i));
    }
    
}