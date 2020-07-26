// Write a C program to check a given array of integers and return true if the value 5 appears 5 times 
// and there are no 5 next to each other

#include<stdio.h>
int main()
{
    int a[15] ={5,2,5,3,5,4,5,4,7,5};
    int count =0;
    for (int i = 0; i < 15; i++)
    {
        if(a[i]==5&&a[i+1]!=5)
        count++;
    }
    if(count==5)
    {
        printf("true!!");
    }
    else
    {
        printf("Not true the above!!!");
    }
    
     
}