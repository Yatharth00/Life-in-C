// Write a C program to check whether a given substring is present in the given string.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="kritharth";
    char b[10]="kri";
    int i;
    int l2 = strlen(b);
    int l1 = strlen(a);
    int max = l1-l2;
    for ( i = 0; i<=max; i++)
    {
        if(strncmp(a+i,b,l2)==0)
            break;
    }
    if(i<=max)
    {
        printf("Gotta substring is found at index %d\n",i);
    }
    else
        printf("substring is not found");
    
}