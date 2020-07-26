// Write a C program to check a given array of integers and
// return true if there is a 3 with a 5 somewhere later in the given array.

#include<stdio.h>
void main()
{
    int a[10]={1,5,4,3,7,5,3,2,0,2};
    int i,j=0,k=0,m=0;
    for ( i = 0; i < 10; i++)
    {
        if(a[i]==3)
        {
            
            for(int k=i;k<10;k++)
            {
                 if(a[k]==5)
                {
                    printf("present in correct order");
                    m=1;
                }
            }
        }
    }
    if(m!=1)
    {
        printf("Not present in corrrect order");
    }

}