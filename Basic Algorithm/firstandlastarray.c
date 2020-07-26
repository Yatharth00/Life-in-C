// Write a C program to check a given array of integers of length 1 or more 
// and return true if the first element and 
// the last element are equal in the given array
#include<stdio.h>
int main()
{
    int a[10];
    int i,n;
    printf("enter the size of element");
    scanf("%d",&n);
    printf("enter the elemnt in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==a[n-1])
    printf("Present!!!");
    else
    {
        printf("not present");
    }
    
}