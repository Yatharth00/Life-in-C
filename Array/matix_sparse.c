// Determine whether it is sparse matix or not
#include<stdio.h>
void main()
{

int a[3][3];
    int i,j,count=0,count1=0;
    printf("Enter the element in array");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(a[i][j]==0)
            count++;
            else
            count1++;
        }
    }
    if(count>count1)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");
}