// Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
void main()
{
    int pos,len;
    int i;
    char a[]="javascript";
    printf("Input the position to start extraction\n");
    scanf("%d",&pos);
    printf("Input the length of substring\n");
    scanf("%d",&len);
    for(i=pos;i<=(pos+len);i++)
    {
        printf("%c",a[i]);
    }
}