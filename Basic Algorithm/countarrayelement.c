// Write a C program to check a given array of integers and return true if
//  the array contains 10 or 20 twice. 
// The length of the array will be 0, 1, or 2. 

#include<stdio.h>
int main()
{
    int a[3] = {1,20,10};
    int i,count=0;
    for(i=0;i<2;i++)
    {
        if(a[i]==10)
        count++;
        else if(a[i]==20)
        count++;
        else
        printf("");
    }
    if(count==2)
    printf("Present!!!");
    else
    printf("NOt Present 10 or 20 twice!!!");
}