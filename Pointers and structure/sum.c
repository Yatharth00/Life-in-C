//  Write a program in C to add two numbers using pointers.

#include <stdio.h>
void main()
{
    int sum, *a, *b, n, m;
    printf("Enter the numbers\n");
    scanf("%d %d", &m, &n);
    a = &m;
    b = &n;
    sum = *a + *b;
    printf("%d", sum);
}