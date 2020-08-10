// Write a program in C to Find the Frequency of user input Character.
#include<stdio.h>
#include<string.h>
void main()
{
    int i,n,count=0;
    char a[]="i love coding";
    printf("enter the charcter");
    scanf("%c",&n);
    for ( i = 0; a[i]!='\0'; i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    printf("the number of  occurence of %c is %d",n,count);
    
}