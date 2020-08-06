// Define a structure student having data member name,roll_no,marks1,marks2,marks3,input record of one student & display detailsin the following manner
// name   rollno  marks1 marks2 marks3.
#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    int marks1, marks2, marks3;
} s[3];
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the name\n");
        scanf("%s", s[i].name);
        printf("Enter roll number\n");
        scanf("%d", &s[i].roll_no);
        printf("Marks of three subjects\n");
        scanf("%d %d %d", &s[i].marks1, &s[i].marks2, &s[i].marks3);
    }
    printf("name\t rollnumber\t marks1\t marks2\t marks3\n");
    for (int i = 1; i <= 3; i++)
    {
        
        printf("%s   %d\t  %d\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].marks1, s[i].marks2, s[i].marks3);
    }
}