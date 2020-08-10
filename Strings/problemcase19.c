// Write a program in C to replace the spaces of a string with a specific character

#include<stdio.h>
#include<string.h>
void main()
{
    char a[] = "i love my india";
    int i;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if(a[i]==' ')
            a[i]='*';
    }
    printf("%s",a);
    
}