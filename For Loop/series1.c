// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+(pow(10,i)-1);
    }
    printf("%d",sum);
    

}