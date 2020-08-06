// WAP to perform following operaation on CLL.

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*last=NULL,*ptr;
void create(int x)
{   
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if(start==NULL)
    {
        start = ptr;
        last = ptr;
        ptr->next = start;
    }
    else
    {
        last->next = ptr;
        last = ptr;
        last->next = start;

    }

}
void display()
{
    struct node *temp;
    temp = start;
    do
    {
        printf("%d", temp->data);
        temp = temp->next;
    } while (temp != start);
}
void insert_beg(int x)
{
    struct node *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    ptr->next = start;
    start = ptr;
    last->next = start;
}
void delete_last()
{
    struct node *temp;
    temp = start;
    while(temp->next!=last)
    {
        temp = temp->next;
    }
    temp->next = last->next;
    free(last);
}
int main()
{
 int x, ch = 1, n, i;
    while (ch != 6)
    {
        printf("\n\n1.create circular linklist\n2.Display linklist\n3.exit\n4.insert at begginig.\n5.Delete from last");
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
        case 4:
            printf("Enter the value");
            scanf("%d", &x);
            insert_beg(x);
        case 5:
            delete_last();
        default:
            printf("enter a valid input");
        }
    }
}

