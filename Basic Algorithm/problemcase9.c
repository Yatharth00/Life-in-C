//  Write a C program to create a new array after replacing  
//  all the values 5 with 0 shifting all zeros to right direction.

#include<stdio.h>
int main()
{
    int a[10] = {1,2,0,3,5,9,5,8,7,4};
    int i;
    int pos = 0;
    int temp;
    for(i=0;i<10;i++)
    {
        if(a[i]==5)
        {
            a[i]=0;
            i++;
        }
    }
    temp = a[9];

    for(i=9;i>0;i--)
    {    
        
        a[i]=a[i-1];
        
        
    }
    a[0] = temp;
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
}