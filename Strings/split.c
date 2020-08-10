
// Write a program in C to split string by space into words
#include<stdio.h>
#include<string.h>
void main()
{
    char a[] = "i love my india";
    int i;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if(a[i]==' ')
            a[i]='\n';
    }
    printf("%s",a);
    
}