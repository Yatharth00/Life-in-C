//  Write a program in C to copy one string to another string without using library function.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="This is string";
    char b[100];
    int i=0;
    while (a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    printf("%s",b);
    
}