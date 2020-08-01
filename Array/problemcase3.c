// Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
void main()
{
    int a[20]= {1,2,3,4,5,6,7,8,9,0};
    int b[20],j=0,k=0;
    int c[20],count=0,count1=0;
    for ( int i = 0; i < 10; i++)
    {
        if(a[i]%2==0)
        {
            count++;
            b[j]=a[i];
            j++;
        }
        else
        {
            count1++;
            c[k]=a[i];
            k++;
        }
    }
    for ( int j = 0; j <count; j++)
    {
        printf("%d",b[j]);
    }
    printf("\n");
    for ( int k = 0; k <count1; k++)
    {
        printf("%d",c[k]);
    }
    
    

}