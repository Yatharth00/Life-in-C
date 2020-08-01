// Write a program in C to find the number occurring odd number of times in an array

#include<stdio.h>
void main()
{
    int a[10]={1,2,4,1,4,9,9,4,7,1};
    int freq[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int i,j,count;
    for ( i = 0; i < 10; i++)
    {   
        count=1;
        for ( j = i+1; j<10; j++)
        {
            if(a[i]==a[j])
               { count++;
                freq[j]=0;}

                   
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
        
        
    }
    for ( i = 0; i < 10; i++)
    {
        if(freq[i]!=0&&freq[i]%2!=0)
        printf("%d : %d\n",a[i],freq[i]);
    }

    
}