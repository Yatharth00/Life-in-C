// Write a C program to check whether two or more 
// non-negative given integers have the same rightmost digit

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d %d %d",&x,&y,&z);
    int c = rightmostdigit(x,y,z);
    printf("%d",c);
}
int rightmostdigit(int x,int y,int z)
{
    if(x%10==y%10||y%10==z%10||z%10==x%10)
    {
        return 1;
    }
}