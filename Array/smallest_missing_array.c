// Write a program in C to find the smallest non-neg missing element from a sorted array.

#include<stdio.h>
void main()
{
    int a[7]={0,2,3,4,5,7,8};
    int i;
    if(a[0]!=0){
        printf("the smallest missig term is: 0");
    }
    else
    {
        for ( i = 0; i < 8; i++)
        {
            if(a[i+1]-a[i]>1)
            {
                printf("the missing term is %d",a[i]+1);
                break;
            }
        }
        
    }

}