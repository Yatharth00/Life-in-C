// Write a program in C to find the second largest element in an array.
#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int fbig,sbig,temp;
    int i,j;
    fbig = a[0];
    sbig = a[1];
    for ( i = 2; i < 10; i++)
    {
        if(a[i]>fbig)
        fbig=a[i];
    }
    for ( i = 2; i < 10; i++){
        if(a[i]>sbig&&a[i]<fbig)
        sbig = a[i];
    }
    if(sbig>fbig)
    {
        temp = sbig;
        sbig = fbig;
        fbig = temp;
    }
    printf("the largest %d\n",fbig);
    printf("the second largest  %d",sbig);
    
}