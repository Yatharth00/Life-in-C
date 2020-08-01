// Write a program in C to to print next greater elements(of each number) in a given unsorted array .
// Elements for which no greater element exist, consider next greater element as -1. 

#include<stdio.h>
void main()
{
    int a[6]={5,3,10,13,6,9},b[6];
    int i,j,max;
    int temp;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for ( i = 0; i < 6; i++)
    {
        b[i]=a[i];
    }
    max=b[0];
    for ( i = 1; i < 6; i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }

    for ( i = 0; i < 6; i++)
    {   
        printf("%d:",b[i]);
        for ( j = i+1; j < 6; j++)
        {
            if(b[i]<b[j])
               { 
                   printf("%d\n",b[j]);
                    break;
               }
        } 
        if (b[i]==max)
            printf("-1\n");
    }
    
    
}