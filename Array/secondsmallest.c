// Write a program in C to find the second smallest element in an array

#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int fsml,ssml,temp;
    int i,j;
    fsml = a[0];
    ssml = a[1];
    for ( i = 2; i < 10; i++)
    {
        if(a[i]<fsml)
        fsml=a[i];
    }
    for ( i = 2; i < 10; i++){
        if(a[i]<ssml&&a[i]>fsml)
        ssml = a[i];
    }
    if(ssml<fsml)
    {
        temp = ssml;
        ssml = fsml;
        fsml = temp;
    }
    printf("the smallest %d\n",fsml);
    printf("the second smallest  %d",ssml);
    
}