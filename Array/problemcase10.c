// Write a program in C to rotate an array by from a particular position.
//input array - {1,2,3,4,5,6,7,8,9,10}.
//rotate from 3rd index.
//Output should be {5,6,7,8,9,10,1,2,3,4}.

#include<stdio.h>
void main()
{
    int a[10];
    int n,i,j,m;
    
    printf("Enter the size of array\n");
    scanf("%d",&m);
    printf("ENter the element in array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no of rotation you wanna perform");
    scanf("%d",&n);
    printf("element before rotation\n");
    for ( i = 0; i < m; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nelement after rotation\n");
    for ( i = 0; i < n; i++)
    {
        int temp = a[0];
        for(j=0;j<m-1;j++)
        {
            a[j] = a[j+1];    
        }
        a[m-1]=temp;

    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}