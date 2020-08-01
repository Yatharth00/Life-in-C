// Write a program in C to merge two arrays of same size sorted in decending order.

#include<stdio.h>
void main()
{
    int a[12]={3,2,1,4,5,6};
    int b[6]={7,8,1,5,9,3};
    int i,j,temp;
    for ( i = 0; i <6; i++)
    {
       a[i+6]=b[i]; 
    }
    printf("the new array after merging is:");
    for ( i = 0; i <12; i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nthe sorted array in decending order:");
    for ( i = 0; i < 12; i++)
    {
        for ( j = i+1; j <12; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for ( i = 0; i < 12; i++)
    {
        printf("%d,",a[i]);
    }
    
    
    
}