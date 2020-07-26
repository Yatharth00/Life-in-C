// Write a C program to count the number of two 5's are next to each other in an array of integers.
//  Also count the situation where the second 5 is actually a 6.

 #include<stdio.h>
 void main()
 {
    int a[10] = {1,2,5,5,4,6,5,6,5,5};
    int i,count=0,z=0;
    for ( i = 0; i < 10; i++)
    {
        if(a[i]==5&&(a[i+1]==5))
        count++;
    }
    for ( i = 0; i < 10; i++)
    {
        if(a[i]==5&&(a[i+1]==6))
            z++;
    }
    printf("the number of two 5's are next to each other in an array of integers %d:\n",count);
    printf("the situation where the second 5 is actually six %d:",z);
 }