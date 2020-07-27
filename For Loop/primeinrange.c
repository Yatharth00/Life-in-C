// Write a program in C to find the prime numbers within a range of numbers

#include<stdio.h>
void main()
{
    int i,j,count;
    for(i=2;i<=100;i++)
    {count=0;
        for ( j = 1; j <= i; j++)
        {
            if(i%j==0)
                count++;
        }
        if (count==2)
        {
            printf("%d,",i);           /* code */
        }
        
        
    }
}