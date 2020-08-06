//  Define a structure student having data member name,roll_no,marks1,marks2,marks3,input record of one student & display detailsin the following manner
// // name   rollno  marks1 marks2 marks3. using pointers

#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll_no;
    int marks1, marks2, marks3;
}std;
int main()
{
    struct student *s;
    s = &std;
    printf("Enter the name\n");
    scanf("%s",s->name);
    printf("Enter roll number\n");
    scanf("%d",&s->roll_no);
    printf("Marks of three subjects\n");
    scanf("%d %d %d",&s->marks1, &s->marks2, &s->marks3);
    printf("name\t rollnumber\t marks1\t marks2\t marks3\n");
    printf("%s   %d\t  %d\t%d\t%d",s->name,s->roll_no,s->marks1, s->marks2, s->marks3);
}