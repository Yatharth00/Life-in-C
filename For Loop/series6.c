// Calculate the sum of the series [ 1-X^2/2!+X^4/4!- .........]

#include<stdio.h>
#include<Math.h>
int factorial(int l);
void main()
{
    int i,n,k=0,l=0,x;
    float sum=0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum = sum+pow(-1,i+1)*pow(x,k)/factorial(2*l);
        k=k+2;
        l=l+1;
    }
    printf(":%f",sum);
   
    
}
int factorial(int l)
{
    int fact=1;
    if(l==0)
        {
            return 1;
        }
    else
    {
        for(int j=1;j<=l;j++)
        {
            fact = fact*j;
        }
        return fact;
    }
    
}