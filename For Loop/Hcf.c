// Write a C program to find HCF (Highest Common Factor) of two numbers and also LCM

#include<stdio.h>
void main()
{
    int a,b,i,hcf=1;
    printf("Enter the less number and greatest number respectively\n");
    scanf("%d %d",&a,&b);
    for(i=1;(i<=a||i<=b);i++)
    {
        if(a%i==0&&b%i==0)
            hcf = i;
    }
    int LCM = (a*b)/hcf;
    printf("the HCF is %d",hcf);
    printf("\nThe LCM is %d",LCM);

}