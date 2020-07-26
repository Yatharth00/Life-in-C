// WAP to find LCM of two numbers.

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the number\n");
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}