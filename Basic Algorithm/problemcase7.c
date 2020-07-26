// Write a C program to create a new array from a 
// given array of integers shifting all zeros to left direction

#include<stdio.h>
void main()
{
    int a[10] = {1,2,3,4,0,5,0,7,0,9};
    int i,temp;
    int pos = 0;
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
            pos++;
            i++;
            
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
}