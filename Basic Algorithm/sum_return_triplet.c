//Write a C program to compute the sum of the two given integer values. 
//If the two values are the same, then return triple their sum.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two values");
    scanf("%d %d",&a ,&b);
    c = triplet_sum(a, b);
    printf("%d",c);
}
int triplet_sum(int a,int b)
{
        if(a==b)
        {
            return (a+b)*3;
        }
        else{
            return a+b;
        }
}
