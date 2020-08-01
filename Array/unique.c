// Write a program in C to print all unique elements in an array.

#include<stdio.h>
void main()
{
    int i,a[10]={1,2,3,1,4,2,7,9,2,6};
    int count,m;
    for ( i = 0; i < 10; i++)
    {
        count=0;
        for (int j = 0; j < 10; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
               

        }
        if(count==1)
            printf("%d",a[i]);
        
        
    }
    
}