// WAP to create and display Singly linklist.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL, *ptr;
void create(int x)
{
    struct node *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if (start == NULL)
        start = ptr;
    else
    {
        temp = start;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
    }
}
void display()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Empty Link");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void main()
{
    int x, ch = 1, n, i;
    while (ch != 4)
    {
        printf("\n\n1.create linklist\n2.Display linklist\n3.exit");
        printf("\n\n Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the number of nodes");
            scanf("%d", &n);
            printf("Enter the value\n");
            for (i = 1; i <= n; i++)
            {
                scanf("%d", &x);
                create(x);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            exit (0);
        default:
            printf("enter a valid input");
        }
    }
}