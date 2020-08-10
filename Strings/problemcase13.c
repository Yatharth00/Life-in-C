// Write a program in C to find the number of times a given word 'the' appears in the given string.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[] = "the greathe wall the tajmahal the corona";
    char b[] = "the";
    int count=0;
    int len = strlen(a);
    int len1 = strlen(b);
    for (int i = 0; i<=len-len1; i++)
    {
        if(strncmp(a+i,b,len1)==0)
            count++;
    }
    printf("%d",count);
}