// Write a program in C to display the multipliaction table vertically from 1 to n.

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ENter the multiplaction number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for ( j = 1; j<=n; j++)
        {
            int multiple = i*j;
            printf(" the multiple is %d*%d %d\n ",i,j,multiple);
        }
        printf("\n");
        
    }
}