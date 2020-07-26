// Write a C program to create new array from a given array of 
// integers shifting all even numbers before all odd numbers

#include<stdio.h>
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,pos=0;
    int b[10];
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            int temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;

            pos++;
        }
        

    }
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("%d",a[i]);
    }
    

}