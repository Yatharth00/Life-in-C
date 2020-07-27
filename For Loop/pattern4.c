// Write a program in C to make such a pattern like a pyramid with an asterisk 

#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enteer the number of rows\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        k=1;
        for ( j = 1; j <= 2*n-1; j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1)&&k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
            
            
        }
        printf("\n");
    }
    
}