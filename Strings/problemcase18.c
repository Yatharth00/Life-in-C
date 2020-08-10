// Write a program in C to check whether a letter is uppercase or not.

#include<stdio.h>
#include<string.h>
void main()
{
    char n;
    printf("ENter the alphabet");
    scanf("%s",&n);
    if('A'<=n&&n<='Z')
    {
        printf(" in upper case");

    }
    else
    {
        printf("not in upper case");
    }
    
}