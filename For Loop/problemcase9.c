//  Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers.

#include<stdio.h>
int primenumber(int i);
void main()
{
    int n,i,j;
    printf("Enter the number\n");
    scanf("%d",&n);
    for ( i = 1; i <= n/2; i++)
    {
                if((primenumber(i)+primenumber(n-i))==n){
                        printf("%d=%d+%d\n",n,i,n-i);
                        }
                
            }

        
    }
    
int primenumber(int isprime)
{
    int k,count=0;
    for ( k = 1; k <= isprime; k++)
    {
        if(isprime%k==0)
            count++;
    }
    if(count==2)
        return isprime;
    
}