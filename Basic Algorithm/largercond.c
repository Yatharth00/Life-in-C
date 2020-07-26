// Write a C program to find the larger from two given integers. However 
// if the two integers have the same remainder when divided by 5, then the return the 
// smaller integer. If the two integers are the same, return 0.

#include<stdio.h>
int main()
{
    int a,b;
    printf("ENter the number");
    scanf("%d %d",&a,&b);
    int c = larger(a,b);
    printf("%d",c);
}
int larger(int a,int b)
{
    if(a%5==b%5&&a>b)
    {
        return b;
    }
    else if(a%5==b%5&&a<b)
    {
        return a;
    }
    else if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
 
    else
    {
        return 0;
    }
    

}