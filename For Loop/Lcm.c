// Write a program in C to find LCM of any two numbers

#include<stdio.h>
void main()
{
    int a,b,i,lcm;
    printf("Enter the number");
    scanf("%d %d",&a,&b);
    for(i=1;i<=100000;i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
}