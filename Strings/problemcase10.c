// Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="w3resource";
    int j,i,temp;
    for ( i = 0; a[i]!='\0'; i++)
    {
        for ( j = i+1; a[j]!='\0'; j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for ( i = 0; a[i]!= '\0'; i++)
    printf("%c",a[i]);
}