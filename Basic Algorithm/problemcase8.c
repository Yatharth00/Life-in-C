// Write a C program to check a given array of integers and return true if 
// the given array contains two 5's next to each other,
//  or two 5 separated by one element

#include<stdio.h>
void main()
{
    int a[10] = {1,2,3,4,5,5,6,5,9,5};
    int j=0,k=0;
    for ( int i = 0; i < 10; i++)
    {
        if(a[i]==5&&a[i+1]==5)
        j=1;
        else if(a[i]==5&&a[i+2]==5)
        k=1;
        else
        {
            printf("");
        }
        
    }
    if(j==1&&k==1)
        printf("both present");
    else if(j==0&&k==1)
        printf("only one digit sepration present");
    else if(j==1&&k==0)
        printf("consecutive 5 are present");
    else
    printf("not present");
    
    
}