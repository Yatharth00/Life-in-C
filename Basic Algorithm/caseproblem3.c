// Write a C program to create a new array of length 3 from a 
// given array (length atleast 3) containing the elements from the middle of the array

#include<stdio.h>
int main()
{
    int a[10],n;
    int b[10];
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    printf("enter the elemnts in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
        if(n%2!=0)
        {
            for(int i=n/2;i<(n/2)+3;i++)
            {
                b[i-n/2]=a[i];
            }
            for (int i = 0; i < 3; i++)
            {
                printf("%d",b[i]);
            }
            
        }

        else
        {
            for(int i=n/2-1;i<n/2+2;i++)
            {
                b[i-(n/2-1)]=a[i];
            }
            for (int i = 0; i < 3; i++)
            {
                printf("%d",b[i]);
            }
            
        }
        
    
    
}