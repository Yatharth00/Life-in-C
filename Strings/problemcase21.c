//  remove the spaces between two words of its content.


#include<stdio.h>
#include<string.h>
void main()
{
    char a[] = "i love my india";
    char b[100];
    int i,j=0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if(a[i]!=' ')
            {
            b[j]=a[i];
            j++;
            }
        else
        {
            continue;
        }
        
           
    }
    b[j]='\0';
    printf("%s",b);
}
    