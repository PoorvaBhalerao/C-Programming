// We have information about Students and students are standed as per singly linear linked list so last kids hand is in his pocket But as they are small kids last kid stops the hand of any middle kid
//so display function runs again and again circularly it is a bug so check whether there is loop or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckLoop(PNODE first)
{

}


int main()
{
    PNODE head = NULL;
    int Pos = 4, i = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iRet = 0;

    InsertLast(&head,  11);
    InsertLast(&head,  21);
    InsertLast(&head,  51);
    InsertLast(&head,  101);
    InsertLast(&head,  111);
    InsertLast(&head,  121);
    InsertLast(&head,  151);

    Display(head);

    temp1 = head;
    temp2 = head;

    //temp2 = temp2->next->next;
    for(i = 1; i<Pos; i++)
    {
        temp1 = temp1->next;
    }

    //temp2 = temp2->next->next->next->next->next->next;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;                // to create the loop

    Display(head);


    return 0;
}