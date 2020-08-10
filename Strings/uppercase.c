// Write a program in C to convert a string to uppercase.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[50] = "I love this new shit";
    int i;
    for ( i = 0; a[i]!=0; i++)
    {
        printf("%c",toupper(a[i]));    
    }
}