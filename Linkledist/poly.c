#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int exp;
    struct node *next;
} *start1 = NULL, *start2 = NULL, *start = NULL, *ptr, *temp1, *temp2;
void poly1(int x, int y)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->coeff = x;
    ptr->exp = y;
    ptr->next = NULL;
    if (start1 == NULL)
    {
        start1 = ptr;
    }
    else
    {
        temp1 = start1;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = ptr;
    }
}
void poly2(int x, int y)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->coeff = x;
    ptr->exp = y;
    ptr->next = NULL;
    if (start2 == NULL)
    {
        start2 = ptr;
    }
    else
    {
        temp2 = start2;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = ptr;
    }
}
void addition(struct node *start1, struct node *start2)
{
    struct node *prev;
    temp1 = start1;
    temp2 = start2;
    
    ptr = (struct node *)malloc(sizeof(struct node));
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->exp > temp2->exp)
        {
            ptr->exp = temp1->exp;
            ptr->coeff = temp1->coeff;
            temp1 = temp1->next;
        }
        else if (temp1->exp < temp2->exp)
        {
            ptr->exp = temp2->exp;
            ptr->coeff = temp2->coeff;
            temp2 = temp2->next;
        }
        else
        {
            ptr->exp = temp1->exp;
            ptr->coeff = temp1->coeff + temp2->coeff;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        ptr->next = (struct node *)malloc(sizeof(struct node));
        prev = ptr;
        if (start == NULL)
        {
            start = prev;
        }
        ptr = ptr->next;
        prev->next = ptr;
    }
    while (temp1 != NULL)
    {
        ptr->exp = temp1->exp;
        ptr->coeff = temp1->coeff;
        ptr->next = (struct node *)malloc(sizeof(struct node));
        ptr = ptr->next;
        
    }
    while (temp2 != NULL)
    {
        ptr->exp = temp2->exp;
        ptr->coeff = temp2->coeff;
        ptr->next = (struct node *)malloc(sizeof(struct node));
        ptr = ptr->next;
        
    }
    prev->next = NULL;
    free(ptr);
}
void multiplication(struct node* start1,struct node* start2)
{
    temp1=start1;
    
    struct node *prev;
    ptr = (struct node *)malloc(sizeof(struct node));
    while(temp1!=NULL)
    {

        temp2=start2;
        while(temp2!=NULL)
        {
            ptr->coeff = temp1->coeff*temp2->coeff;
            ptr->exp = temp1->exp+temp2->exp;
            ptr->next = (struct node *)malloc(sizeof(struct node));
            prev = ptr;
            if(start==NULL)
            {
                start = prev;
            }
            ptr=ptr->next;
            prev->next = ptr;
            temp2 = temp2->next;
        }
        temp1=temp1->next;
    }
    prev->next = NULL;
    free(ptr);
}
void simplification(struct node *start)
{
    struct node *t1,*temp,*prev;
    for(temp=start;temp->next!=NULL;temp=temp->next)
    {    
        prev=temp;
        for(t1=temp->next;t1!=NULL;t1=t1->next)
        {
            if(temp->exp==t1->exp)
            {
                temp->coeff = temp->coeff+t1->coeff;
                prev->next=t1->next;
                free(t1);
                t1=prev->next;
            }
            else
                prev = t1;
        }
    }
}

void display()
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if (temp != NULL)
        {
            printf("+");
        }
    }
}
void main()
{
    int x, y, ch = 1, n;
    while (ch != 8)
    {
        printf("\n1.create a polynomial\n2.create a another polynomial\n3.addition of two polynomial\n4.display\n5.exit\n6.Multiplication of two polynomial.7.simplification of poly");
        printf("\nEnter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the no of nodes");
            scanf("%d", &n);
            printf("enter the value of coeff and exp\n");
            for (int i = 1; i <= n; i++)
            {
                scanf("%d%d", &x, &y);
                poly1(x, y);
            }
            break;
        case 2:
            printf("enter the no of nodes");
            scanf("%d", &n);
            printf("enter the value of coeff and exp\n");
            for (int i = 1; i <= n; i++)
            {
                scanf("%d%d", &x, &y);
                poly2(x, y);
            }
            break;
        case 3:
            addition(start1, start2);
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        case 6:
            multiplication(start1,start2);
            break;
        case 7:
            simplification(start);
            break;
        }
    }
}
