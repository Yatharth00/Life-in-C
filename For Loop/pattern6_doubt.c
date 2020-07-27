//  Write a program in C to display the pattern like a diamond

#include<stdio.h>
void main()
{
    int i,j,total_row,n;
    printf("Enter the odd number of rows\n");
    scanf("%d",&total_row);
    n=total_row/2+1;
    for(i=1;i<=n;i++)
    {
        for ( j = 1; j<=2*n-1 ; j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
                printf("*");
            else
            {
                printf(" ");
            }
            
        }   
        printf("\n");
    }
    
    int m= total_row-n;
    for(i=m;i>=1;i--)
    {printf(" ");
        for ( j = 1; j<=2*m-1 ; j++)
        {
            if(j>=m-(i-1)&&j<=m+(i-1))
                printf("*");
            else
            {
                printf(" ");
            }
            
        }   
        printf("\n");
    }
}