// Write a program in C to Concatenate Two Strings Manually. 

#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char a[100] = "this is string one and ";
    char b[100] = "this is string two";
    int len = strlen(a);
    for ( j = 0; b[j]!='\0'; j++)
    {
        a[len+j]=b[j];
    }
    a[len+j]='\0';
    printf("%s",a);
    

}