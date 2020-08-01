// Write a program in C to delete an element at desired position from an array

#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,pos,j;
    printf("enter the position of which the elment to be deleted\n");
    scanf("%d",&pos);
    for ( i = pos; i < 10; i++)
    {
        a[i]=a[i+1];
    }
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    
    

}