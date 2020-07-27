// Write a c program to find the perfect numbers within a given number of range

#include<stdio.h>
int main()
{
    int j,sum,i;
    for ( i = 1; i <=50; i++)
    {sum=0;
        for ( j = 1; j <i ; j++)
        {
            if(i%j==0)
                sum = sum+j;
        }
        
        if(sum==i)
        {
           printf("%d",i);
        }   
        
    }
    
    return 0;
}