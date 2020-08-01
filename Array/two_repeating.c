// Write a program in C to find the repeating elements in a given array.

#include<stdio.h>
void main()
{
    int a[9] = {1,9,2,1,3,5,4,5,9};
    int i,j,count;
    int freq[9] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(i=0;i<9;i++)
    {
        count=1;
        for(j=i+1;j<9;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
            
        }
    }
    for(i=0;i<9;i++)
    {
        if(freq[i]!=0&&freq[i]>1)
        {
            printf("%d,",a[i]);
        }
    }

}
    