// Write a C program to check whether the sequence of numbers 1, 2, 3
//  appears in a given array of integers somewhere

#include<stdio.h>
int main()
{
    int a[10];
    printf("enter the element in array");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]==1&&a[i+1]==2&&a[i+2]==3)
        {
            printf("present");
        
        } 

        
    }
    


}