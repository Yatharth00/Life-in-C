// Write a C program to create a new array taking the elements before the 
// element value 5 from a given array of integers

#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,5,7};
    int k,i,b[5];
    for ( i = 0; i < 5; i++)
    {
        if(a[i]==5)
        {
            for (k = 0; k< i ; k++)
            {
                b[k]=a[k];
                printf("%d",b[k]);
            }
            
        }
    }
    
}