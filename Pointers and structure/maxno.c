//  Write a program in C to find the maximum number between two numbers using a pointer
#include<stdio.h>
void main()
{
    int a, b, *p, *q, max;
    printf("Enter the numbers\n");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    max = (*p > *q) ? *p : *q;
    printf("the max number is %d", max);
}