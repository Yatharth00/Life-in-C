// Write a program in C to find the missing number from a given array. There are no duplicates in list.
#include<stdio.h>
void main()
{
    int a[10]={1,3,4,2,5,6,9,8,0};
    int i,sum;
    //sum of natural number from 0 to 9
    int sumq = 9*(9+1)*.5;
    for ( int j = 0; j < 9; j++)
    {
        sum = sum+a[j];
    }
    printf("The missing number is : %d",sumq-sum);
    
    
}