// Write a program in C to insert New value in the end of array and then Sort.

#include<stdio.h>
void main()
{
    int a[10]={4,5,6,1,2,38,54,69,99};
    int n,temp,i,j;
    printf("Enter the number in existing array\n");
    scanf("%d",&n);
    a[9]=n;
    for ( i = 0; i < 10; i++)
    {
        for ( j = i; j < 10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;           
            }
        }
    }
    printf("the sorted list after insertion\n");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d",a[i]);
    }
}