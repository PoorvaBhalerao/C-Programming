// We have information about students(name and marks) and that data is stores in linear data structure in increasing order
//so write a logic to accept marks of students in linear data structure from user and return middle student name.
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first) == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
    }
}


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|  %d  | -> ",(first->data));
        first = first->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE head = NULL;

    InsertLast(&head,  11);
    InsertLast(&head,  21);
    InsertLast(&head,  51);
    InsertLast(&head,  101);
    InsertLast(&head,  111);

    Display(head);
    return 0;
}