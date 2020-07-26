// Check three given integers and 
// return true if one of them is 20 or more less than one of the others

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a ,&b ,&c);
    int d = condiff(a,b,c);
    printf("%d",d);

}
int condiff(int a,int b,int c)
{
    if(a-c>=20||c-a>=20||b-c>=20||c-b>=20||a-b>=20||b-a>=20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}