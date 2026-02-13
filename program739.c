// Singly Linear Linked List// Final code
// write a recursive program to reverse display reverse linked list..... IMPORTANT INTERVIEW QUES

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



void DisplayI(PNODE first)
{
    while(first != NULL)
    {
        printf("|  %d  | -> ",(first->data));
        first = first->next;
    }
    printf("NULL\n");
}

void DisplayR(PNODE first)
{
    if(first != NULL)
    {
        
        
        DisplayR(first->next);

                printf("|  %d  | -> ",(first->data));

    }

}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

int CountR(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        first = first->next;
        CountR(first);
    }
    return iCount;
}



int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);

    DisplayR(head);
    
    return 0;
}