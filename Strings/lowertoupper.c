// Write a program in C to read a sentence and replace 
// lowercase characters by uppercase and vice-versa.

#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[] = "thIs Is enOuGh for tHe dAy";
    for ( i = 0; a[i]!= '\0'; i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>='a'&& a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else
        {
            continue;
        }
    }
    printf("%s",a);
    
    
}