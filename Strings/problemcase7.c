// Write a program in C to count total number of alphabets, digits and special characters in a string

#include<stdio.h>
#include<string.h>
 
void main()
{
    char a[20];
    int i=0,c=0,c1=0,c2=0;
    printf("Enter the text");
    fgets(a,sizeof(a),stdin);
    while(a[i]!='\0')
    {
        if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            c++;
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            c1++;
        else
            c2++;
        i++;
    }
    printf("no of vowels is %d\n",c);
    printf("no of alphabet  is %d\n",c1);
    printf("no of special symbols is %d",c2);
}