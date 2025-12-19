//Doubly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    printf("NULL <=> ");
    while(first != NULL)
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
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

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL)
    {
        *first = newn; 
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL)
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
        newn->prev = temp;
    }
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iSize = 0;
    iSize = Count(*first);

    if((pos < 1) || (pos > iSize+1))
    {
        printf("Invalid position entered\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, no);
    }
    else if(pos == iSize+1)
    {
        InsertLast(first, no);
    }
    else
    {
        PNODE temp = NULL;
        PNODE newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        int iCnt = 0;
        for(iCnt = 1; iCnt<pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next = newn;
        newn->next->prev = newn;

    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        printf("Linked liost is empty\n");
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)->next;
        free(temp);
        (*first)->prev = NULL;
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        printf("Linked liost is empty\n");
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int iSize = 0;
    iSize = Count(*first);

    if((pos < 1) || (pos > iSize+1))
    {
        printf("Invalid position entered\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize+1)
    {
        DeleteLast(first);
    }
    else
    {
        PNODE temp = NULL;
        PNODE target = NULL;
        int iCnt = 0;

        temp = *first;
        
        for(iCnt = 1; iCnt<pos-1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = temp->next->next;
        target->next->prev = temp;
        free(target);
                
    }
}



int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 11);
    InsertFirst(&head, 21);
    InsertFirst(&head, 51);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    InsertLast(&head, 125);
    InsertLast(&head, 155);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    InsertAtPos(&head, 45, 2);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    DeleteAtPos(&head, 2);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);


    return 0;
}