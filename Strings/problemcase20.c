//  Print only the string before new line character

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[100]="i love milkybar\n i also love dairymilk\nafter these i love 5star\n";
    for ( int i = 0; isprint(a[i])!=0; i++)
    {
        printf("%c",a[i]);
    }
    
}