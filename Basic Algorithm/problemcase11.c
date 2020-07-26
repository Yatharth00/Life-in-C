// Write a C program to check whether the value of each element is equal or greater 
// than the value of previous element of a given array of integers.

#include<stdio.h>
void main()
{
    int a[5] = {3,5,1,7,4};
    int n,i;
    printf("Enter the number from the given array\n");
    scanf("%d",&n);
    for(i=1;i<5;i++)
    {
        if(a[i]==n)
        {
            if(a[i-1]>n)
                printf("the previous element is greater !!");
            else if(a[i-1]==n)
                printf("the previous element is  equal!!");
            else
            {
                printf("the previous element is not greater");
            }
            
        }
    }
    if(n==3)
    {
        printf("no previous element");
    }
}