// Write a program in C to count a total number of duplicate elements in an array

#include<stdio.h>
void main()
{
    int a[]={1,2,3,1,5,1,7,6,7};
    int i,j,count=0;
    for (int  i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 9; j++)
        {
            if(a[i]==a[j])
               { count++;
                break;}
        }
        
    }
    printf("%d",count);
    
}