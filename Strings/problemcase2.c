// Write a program in C to find the length of a string without using library function

#include<stdio.h>
void main()
{
    char a[20];
    int l=0,i;
    printf("Enter anything in string");
     //fgets(a,sizeof(a),stdin);
    scanf("%s",a);
    for ( i = 0; a[i]!='\0'; i++)
    {
        l++;
    }
    printf("the length is %d",l);
    
}