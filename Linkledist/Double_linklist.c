// WAP a to create a double linklist.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start=NULL,*ptr,*last=NULL;

void create(int x)
{
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    if(start==NULL)
    {
        start = ptr;
        last = ptr;
        ptr->next = ptr->prev = NULL;
    }
    else
    {
        last->next = ptr;
        ptr->prev = last;
        last = ptr;
        last->next = NULL;
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
void insert_anyposition(int pos,int x)
{
    struct node *temp;
    for (int i = 1; i <=pos; i++)
    {
        
    }
    
}
int main()
{
 int x, ch = 1, n, i;
    while (ch != 6)
    {
        printf("\n\n1.create circular linklist\n2.Display linklist\n3.exit\n4.insert at any position.");
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
            exit;
        default:
            printf("Invalid input");
        }
    }
}
