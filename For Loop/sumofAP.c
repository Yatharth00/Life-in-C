// Write a c program to find out the sum of an A.P. series.

#include<stdio.h>
void main()
{
    int a,d,AP;
    float n,sum;
    printf("enter the first term, common diff and no of terms respectively\n");
    scanf("%d %d %f",&a,&d,&n);
    for ( int i = 1; i <=n; i++)
    {
          AP = a+(i-1)*d;
          printf("%d",AP);
    }
    sum = n/2*(2*a+(n-1)*d);
    printf("\nthe sum is %f",sum);
    
    
}