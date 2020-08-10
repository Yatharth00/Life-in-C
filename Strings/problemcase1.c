//  Write a program in C to input a string and print it

#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    puts("ENter your name:");
    fgets(a,sizeof(a),stdin);
    printf("the name is %s",a);
}