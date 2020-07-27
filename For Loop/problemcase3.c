// Write a program in C to display the n terms of odd natural number and their sum .

#include<stdio.h>
void main(){
int n,i,r=1,sum=0;
printf("Enter the number of odd terms\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("%d\n",r);
    sum = sum+r;
    r=r+2;
    
    
}

printf("the sum is %d",sum);
}
