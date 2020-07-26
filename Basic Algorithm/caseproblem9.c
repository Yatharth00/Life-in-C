// Write a C program to compute the sum of the numbers in a
//  given array except those numbers starting with 5 followed by atleast one 6.
//  Return 0 if the given array has no integer

#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 6, 4, 5, 6, 6, 9, 6, 10};
    int sum = 0;
    int i, j;
    int new_sum = 0;
    int total_sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == 5)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (a[j] == 6 && a[j + 1] == 6)
                    sum = sum + a[j] + a[j + 1];
            }
        }
    }
    sum = sum + 5;
    for (i = 0; i < 10; i++)
    {

        total_sum = total_sum + a[i];
    }
    printf("the sum is %d ", total_sum - sum);
}