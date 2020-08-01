// Write a program in C to find if a given integer x appears more
// than n/2 times in a  array of n integers. 

#include<stdio.h>
void main()
{
    int a[9]={1,3,3,5,4,3,2,3,3};
    int i,j,x,count=0;
    printf("Enter the number");
    scanf("%d",&x);
    for ( i = 0; i < 9; i++)
    {
        if(a[i]==x)
        count++;
    }
    if(9/2<count)
    {
        printf("the number present more than n/2times  in a array");
    }
    else
        printf("the number present less than n/2times  in a array");

    
}