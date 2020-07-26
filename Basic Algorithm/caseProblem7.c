x// Write a C program to check whether an array of integers contains a 3 next to a 3 or a 5 
// next to a 5 or both

#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,9,4,5,5,6,7,8};
    int i,k=0,l=0;
    for ( i = 0; i < 10; i++)
    {
        if(a[i]==3&&a[i+1]==3)
        {
        k=1;
        }
        else if(a[i]==5&&a[i+1]==5)
        {
        l=1;
        }
        else
        {
            printf("");
        }
        
    }
    if(k==1&&l==1)
    {
        printf("both present");
    }
    else if (k==0&&l==1)
    {
        printf("present in 5");
    }
    else if (k==1&&l==0)
    {
        printf("present in 3");
    }
    else
    {
        printf("not present");
    }
    
    
    
    
        
}