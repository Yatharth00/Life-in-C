// Write a program in C to remove characters in String Except Alphabets.

#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="w3school@";
    int i,j;
    for ( i = 0; str[i]!='\0'; i++)
    {
        while(!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
            {
                for (  j = i; str[j]!='\0'; j++)
                {
                    str[j]=str[j+1];
                }

                str[j]='\0';
            }
    }
    printf("%s",str);
}