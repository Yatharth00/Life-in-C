//  Write a C program to check whether the sequence of numbers
//   1, 2, 3 appears in a given array of integers somewhere.

#include<stdio.h>
void main()
{
    int a[10] = {2,3,4,5,6,1,2,3,9,10};
    int i,m=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==1&&a[i+1]==2&&a[i+2]==3)
        {
            printf("THey are in sequence");
            m=1;
            break;
        }
    }
    if(m==0)
    {
        printf("Nope they aren't in seq");
    }
}