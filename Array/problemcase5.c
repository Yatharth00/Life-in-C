// Write a program in C to insert New value in the array at particular position
#include<stdio.h>
void main()
{
    int pos,i,j,a[10]={1,2,3,4,5,6,7,8,10};
    int temp,n;
    printf("ENter the position");
    scanf("%d",&pos);
    printf("ENter the number u wanna enter");
    scanf("%d",&n);
    for(i=8;i>=pos;i--)
    {
    a[i+1]=a[i];
    }
    a[pos]=n;
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
    
}