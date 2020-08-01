// Write a program in C to find a pair with given sum in the array.

#include<stdio.h>
void main()
{
    int a[6]={1,2,3,9,4,8};
    int n,i,j;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i = 0; i < 6; i++)
    {
        for(j=i;j<6;j++)
        {
            if(a[i]+a[j]==n)
            printf("%d+%d=%d\n",a[i],a[j],n);
        }
    }
    
}