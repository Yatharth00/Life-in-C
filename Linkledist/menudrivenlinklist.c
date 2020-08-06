#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data, exp, coeff;
    struct node *next;
} *start = NULL, *ptr, *last, *start1 = NULL, *last1;
void create(int x)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if (start == NULL)
    {
        start = ptr;
        last = ptr;
    }
    else
    {
        last->next = ptr;
        last = ptr;
    }
}
void create1(int x)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if (start1 == NULL)
    {
        start1 = ptr;
        last1 = ptr;
    }
    else
    {
        last1->next = ptr;
        last1 = ptr;
    }
}
void concatinate(struct node *last, struct node *start1)
{
    last->next = start1;
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
void insertbeg(int x)
{

    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = start;
    start = ptr;
}
void insertpos(int x, int pos)
{
    struct node *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if (pos == 0)
    {
        ptr->next = start;
        start = ptr;
    }
    else
    {
        temp = start;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}
void insertelementafter(int x, int m)
{
    struct node *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = m;
    ptr->next = NULL;
    temp = start;
    while (temp->data != x && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("data not found:");
    }
    else
    {
        ptr->next = temp->next;
        temp->next = ptr;
    }
}
void insertelementbefore(int x, int m)
{
    struct node *temp, *prev;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    temp = start;
    while (temp->data != m && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Data not found");
    }
    else
    {
        ptr->next = prev->next;
        prev->next = ptr;
    }
}
void deleteelementbeg()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Nothing to Delete!!!!");
    }
    temp = start;
    start = start->next;
    free(temp);
}
void deletepos(int pos)
{
    struct node *temp, *prev;
    if (pos == 0)
    {
        temp = start;
        start = start->next;
        free(temp);
    }

    else
    {
        temp = start;
        for (int i = 1; i < pos; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
}
void delete_end()
{
    struct node *temp, *prev;
    if (start == NULL)
    {
        printf("Empty!!!");
    }

    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
}
void delete_afterelement(int x)
{
    struct node *temp, *prev;
    temp = start;
    while (temp->data != x && temp != NULL)
    {
        temp = temp->next;
    }
    if (start == NULL)
    {
        printf("NO DELETION possible");
    }
    else
    {
        struct node *t = temp->next;
        temp->next = t->next;
        free(t);
    }
}
void before_element(int x)
{
    struct node *temp, *prev, *curr;
    temp = prev = curr = start;
    while (temp->data != x && temp != NULL)
    {
        curr = prev;
        prev = temp;
        temp = temp->next;
    }
    if (prev == start)
    {
        start = start->next;
    }
    curr->next = prev->next;
    free(prev);
}
void count_nodes()
{
    int count = 1;
    struct node *temp;
    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("the total number of nodes is %d", count);
}
void reverse_linklist()
{
    struct node *temp, *prev = NULL, *Curr;
    temp = Curr = start;
    while (temp != NULL)
    {
        temp = temp->next;
        Curr->next = prev;
        prev = Curr;
        Curr = temp;
    }
    start = prev;
}
void remove_even_element()
{
    struct node *temp, *prev;
    prev = temp = start;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (temp == start)
            {
                start = start->next;
                free(temp);
                temp = start;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
}
void even_positioned()
{
    struct node *temp, *prev;
    temp = prev = start;
    int count = 0;
    while (temp != NULL)
    {
        if (count % 2 == 0)
        {
            if (temp == start)
            {
                start = start->next;
                free(temp);
                temp = start;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
        count++;
    }
}
void max_min_value()
{
    struct node *temp;
    temp = start;
    int max = start->data;
    while (temp != NULL)
    {
        if (temp->data > max)
            max = temp->data;
        temp = temp->next;
    }
    temp = start;
    int min = start->data;
    while (temp != NULL)
    {
        if (temp->data < min)
            min = temp->data;
        temp = temp->next;
    }
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d", min);
}
void sorting_link()
{
    struct node *temp, *fwd;
    temp = start;
    int i, temp1;
    for (temp = start; temp != NULL; temp = temp->next)
    {
        for (fwd = temp->next; fwd != NULL; fwd = fwd->next)
        {
            if (temp->data > fwd->data)
            {
                temp1 = temp->data;
                temp->data = fwd->data;
                fwd->data = temp1;
            }
        }
    }
}
void combine()
{
    struct node *temp;
}
void create_polynomial(int x, int y)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->coeff = x;
    ptr->exp = y;
    if (start == NULL)
    {
        start = ptr;
        last = ptr;
    }
    else
    {
        last->next = ptr;
        last = ptr;
    }
}
void display_poly()
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        if (temp == last)
        {
            if (temp->exp == 0)
            {
                printf("%d", temp->coeff);
            }
            else
            {
                printf("%dx^%d", temp->coeff, temp->exp);
            }
            
        }
        else if (temp->coeff == 0)
        {
            printf("");
        }

        else
        {
            printf("%dx^%d+", temp->coeff, temp->exp);
        }
        temp = temp->next;
    }
}
void main()
{
    int x, ch = 1, n, i, m, pos, y;
    while (ch != 30)
    {
        printf("\n\n1.create linklist\n2.Display linklist\n3.exit\n4.insert element in begining\n5.insert element in any position\n6.Insert after a given element in a singly linklist.\n7.insert element before a given element.");
        printf("\n8.delete element from begning.\n9.delete node from a specific position.\n10.delete node from last\n11.delete node after a given element\n12.delete node before a given element.\n13.count the no of nodes present\n14.reverse a linklist.");
        printf("\n15.remove all even elements.\n16.Remove alternate nodes.\n17.Maximum and minimum value in linkedlist.\n18.Sorting linklist.\n19.create another linked list\n20.Concatinate linked list.\n21.Create a polynomial\n22.Display ploynomial.");
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
            exit(0);
        case 4:
            printf("Enter the value you wanna insert at begging\n");
            scanf("%d", &x);
            insertbeg(x);
            break;
        case 5:
            printf("enter the position u wanna insert an element\n");
            scanf("%d", &pos);
            printf("ENter the number\n");
            scanf("%d", &x);
            insertpos(x, pos);
            break;
        case 6:
            printf("enter the value after which you want to insert new element\n");
            scanf("%d", &x);
            printf("which element u wanna inseert\n");
            scanf("%d", &m);
            insertelementafter(x, m);
            break;
        case 7:
            printf("enter the value before which you want to insert new element\n");
            scanf("%d", &m);
            printf("which element u wanna inseert\n");
            scanf("%d", &x);
            insertelementbefore(x, m);
            break;
        case 8:
            deleteelementbeg();
            break;
        case 9:
            printf("Enter the position you want to delete\n");
            scanf("%d", &pos);
            deletepos(pos);
            break;
        case 10:
            delete_end();
            break;
        case 11:
            printf("Enter the element after which you wanna delete element\n");
            scanf("%d", &x);
            delete_afterelement(x);
            break;
        case 12:
            printf("Enter the element after which you wanna delete element\n");
            scanf("%d", &x);
            before_element(x);
            break;
        case 13:
            count_nodes();
            break;
        case 14:
            reverse_linklist();
            break;
        case 15:
            remove_even_element();
            break;
        case 16:
            even_positioned();
            break;
        case 17:
            max_min_value();
            break;
        case 18:
            sorting_link();
            break;
        case 19:
            printf("enter the number of nodes");
            scanf("%d", &n);
            printf("Enter the value\n");
            for (i = 1; i <= n; i++)
            {
                scanf("%d", &x);
                create1(x);
            }
            break;
        case 20:
            concatinate(last, start1);
            break;
        case 21:
            printf("enter the number of nodes");
            scanf("%d", &n);
            printf("Enter the value of coeff and exponent respectively\n");
            for (i = 1; i <= n; i++)
            {
                scanf("%d%d", &x, &y);
                create_polynomial(x, y);
            }
            break;
        case 22:
            display_poly();
            break;
        case 23:
            break;
        default:
            printf("enter a valid input");
        }
    }
}