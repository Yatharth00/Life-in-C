// Write a program in C to find the 
// Floor and Ceil of the number 0 to 10 from a sorted array.

#include<stdio.h>
void main()
{
    int a[10]={-1,1,3,5,7,8,9};
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("number %d ",i);
        for ( j = 0; j < 7; j++)
        {
            if (a[j]==i)
                printf("floor and celing is %d:%d\n",i,i);
            
            else if(a[j]<i&&a[j+1]>i)
                printf("floor and celing is %d:%d\n",a[j],a[j+1]);

            else
                printf("");
        }
        
    }
}