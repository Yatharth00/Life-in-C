//  Write a C program to check if a triple is presents in an array of integers or not. 
//  If a value appears three times in a row in an array it is called a triple.

#include<stdio.h>
int main()
{
    int a[]={1,2,1,4,5};
    int a1[] = {3,9,1,5,4};
    int a2[] = {1,3,1,6,7};
    for(int i=0;i<5;i++)
    {
        if(a[i]==a1[i]==a2[i])
        printf("a triplet");
    }
}