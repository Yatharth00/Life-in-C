// Write a program in C to print individual characters of string in reverse order

#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("Enter anything in string\n");
    fgets(a,sizeof(a),stdin);
    for(i=strlen(a);i>=0;i--)
        printf("%c",a[i]);

}
        