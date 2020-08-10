// Write a program in C to separate the individual characters from a string

#include<stdio.h>
void main()
{
    char a[20];
    int l=0,i;
    printf("Enter anything in string\n");
    fgets(a,sizeof(a),stdin);
    for ( i = 0; a[i]!='\0'; i++)
    {
        printf("%c ",a[i]);
    }
   
}