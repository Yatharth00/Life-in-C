// Write a program in C to find the smallest positive number missing from an unsorted array.

#include<stdio.h>
void main()
{
    int a[9]={3,1,4,10 ,-5 ,15 ,2 ,-10,-20};
    int i,j,temp;
    for ( i = 0; i < 8 ; i++)
    {
        for ( j = i+1; j<9; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
                
        }
        
    }
    printf("the sorted array is");
    for ( i = 0; i < 9; i++)
    {
        printf("%d,",a[i]);
    }
    

    printf("\nthe missing elemnt is:");
    for ( i = 0; i < 8 ; i++)
    {
            if(a[i]>0)
            {
                if(a[i+1]-a[i]>=1)
                {
                printf("%d, ",a[i]+1);
                break;
                }
            }

    }
}