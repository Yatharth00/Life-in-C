// Write a program in C to convert a decimal number into octal .

#include<stdio.h>
void main()
{
    int n,a[20],r,i=0,count=0;
    printf("Enter the number");
    scanf("%d",&n);
        while(n>0)
        {
            r = n%8;
            a[i]=r;
            i++;
            count++;
            n=n/8;
            
        }
        printf("the value of count is %d\n",count);
        for (  i=0; i < count; i++)
        {
            printf("%d",a[i]);
        }
        printf("\nthe octal value is:\n");
        for ( i = count-1; i >=0; i--)
        {
           printf("%d",a[i]);
        }
        
        
}