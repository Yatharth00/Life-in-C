// Write a program in C to find the ceiling in a sorted array. 

// N.B.: Given a sorted array in ascending order and a value x, the 
// ceiling of x is the smallest element in array greater than or equal to x, 
// and the floor is the greatest element smaller than or equal to x.

#include<stdio.h>
void main()
{
    int a[8]={1,3,4,7,8,9,9,10};
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("the celieng of %d is ",n);
    for ( i = 0; i < 8; i++)
    {
        if(a[i]<=n&&a[i+1]>n)
            printf("%d",a[i+1]);
    }
    
}