// Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int i,count=0;
    printf("Enter anything in string\n");
    fgets(a,sizeof(a),stdin);
    for ( i = 0; a[i]!='\0'; i++)
    {
       if(a[i]==' ')
        count++;
    }
    printf("the number of words is %d",count+1);
    
    

}