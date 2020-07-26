// Write a C program to check two given integers, each in the range 10..99.
//  Return true if last digit appears in both numbers are same , such as the 3 in 13 and 33.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a ,&b);
    if((a<=10&&a>=99)&&(b<=10&&b>=99))
    {
        printf("out of range");
    }
    else
    {
         int c = digit_check(a,b);
         printf("%d",c);
    }
}
int digit_check(int a,int b)
{
    if(a%10==b%10)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}