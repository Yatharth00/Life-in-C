//  Write a program in C to find two elements whose sum is closest to zero. 

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10]={ 38 ,44 ,63 ,-51 ,-35 ,19 ,84 ,-69,4,-46};
    int i,j,sum_min,sum,k,l;
    sum_min=a[0]+a[1];
    abs(sum_min);
    for ( i = 1; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            sum=a[i]+a[j];
            if(abs(sum_min)>abs(sum))
            {
                sum_min=sum;
                k=i;
                l=j;
            }
        }
        
    }
    printf("the number which is closet to 0: %d %d",a[k],a[l]);
}