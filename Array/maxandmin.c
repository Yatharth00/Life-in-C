// Write a program in C to find the maximum and minimum element in an array. 

#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int i,j,max,min;
    min= max = a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];

    }
    for(i=0;i<10;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("Max : %d\n Min : %d",max,min);
}