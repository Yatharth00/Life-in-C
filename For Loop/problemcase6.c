// Write a program in C to display the n terms of harmonic series and their sum.
#include<stdio.h>
void main()
{
    int i,n;
    float sum=0.0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("The sum of the HP is \t");
    for ( i = 1; i <=n; i++)
    {
        int r = i;
        sum = sum+r;
        printf("1/%d,",r);
    }
    printf("\n1/%f=%f",sum,1/sum);
    
}