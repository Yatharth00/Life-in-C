// Write a program in C to merge one sorted array into another sorted array.

#include<stdio.h>
void main()
{
    int a[5]={1,3,5,6,9};
    int b[5]={2,4,7,8,10};
    int c[10];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        c[i+5]=b[i];
    }
    for ( i = 0; i < 10; i++)
    {
     for ( j = i; j < 10; j++)
     {
         if(c[i]>c[j])
         {temp=c[i];
         c[i]=c[j];
         c[j]=temp;
         }
     }
     
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d,",c[i]);
    }
    
    
}