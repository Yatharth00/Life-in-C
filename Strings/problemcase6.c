// Write a program in C to compare two string,(in length as well) ,without using string library functions

#include<stdio.h>
#include<string.h>
void main()
{
    int len1,len2;
    char a[20],b[20];
    int i=0,m=1,k;
    printf("ENteer the strings");
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    len1 = strlen(a);
    len2 = strlen(b);
    if(len1==len2)
    {
        while(i<len1)
        {
            if(a[i]==b[i])
                {    
                    m=1;
                    i++;
                }
            else
                {
                    m=0;
                    k=i;
                    break;
                }
        }
        if(m==0)
        {
            if(a[k]>b[k])
                printf("the string a is greater than b but their length are same");
            else
                printf("string B is greater than a but their length are same");
        }
        else if(m==1)
        {
            printf("the strings are equal");
        }
        else
            printf("");
        
        
    }
    else
        printf("the strings are not equal");
    
}   