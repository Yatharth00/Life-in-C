// Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
#include<stdio.h>
#include<math.h>
void main()
{
    float sum=0,x;
    int i;
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        sum = sum + pow(x,i)/factorial(i);
    }
    printf("%f",sum+1);
}
int factorial(int i)
{
    int fact=1;
    int j;
    for ( j = 1; j <= i; j++)
    {
        fact = fact*j;
    }
    return fact;
    
}