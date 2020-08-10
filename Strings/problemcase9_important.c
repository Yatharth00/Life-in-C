//  Write a program in C to find maximum occurring character in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[]= "i love cookies";
    int count[256]={0};
    int i,j,temp,max=0;
    for(int i=0;a[i]!='\0';i++)
    {
        count[a[i]]++;  
        if(max<count[a[i]])
            max=count[a[i]]; 
    }
    for ( i = 0; a[i]!='\0'; i++)
    {
        if(count[a[i]]!='\0'){
        printf("%c:%d\n",a[i],count[a[i]]);
        count[a[i]]=0;}
    }
    printf("the maximum occurring character in String is :%c",a[max]);

}