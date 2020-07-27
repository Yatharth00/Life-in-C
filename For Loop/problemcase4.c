//  Write a program in C to display the n terms of even natural number and their sum.

#include<stdio.h>
void main()
{
    int n,r=0,sum=0;
    printf("Enter the number of terms \n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d\t",r);
        sum = sum+r;
        r=r+2;

        
    }
    printf("\n%d",sum);

    

}