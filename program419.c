// Doubly Circular Linked List              // Final Code
//InsertFirst, Display, Count, InsertLast, DeleteFirst, DeleteLast, InsertAtPos, DeleteAtPos

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)         // LL is empty
    {
        *first = newn;
        *last = newn;
        //(*last)->next = *first;
        //(*first)->prev = *last;
    }
    else                                       // LL contains more than one node
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
        //(*last)->next = *first;
        //(*first)->prev = *last;
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;
   
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)         // LL is empty
    {
        *first = newn;
        *last = newn;
        //(*last)->next = *first;
        //(*first)->prev = *last;
    }
    else                                       // LL contains more than one node
    {
        newn->prev = *last;
        (*last)->next = newn;
        *last = newn;
        //(*last)->next = *first;
        //(*first)->prev = *last;
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)             // LL is empty
    {
        printf("LL is empty\n");
        return;
    }
    else if(*first == *last)                        // LL contains only one node
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else                                            // LL contains more than one node
    {
        *first = (*first)->next;
        free((*last)->next);                        // OR free((*first)->prev);
        
        (*first)->prev = *last;
        (*last)->next = *first;
    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)->prev;
        free((*last)->next);
        
        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        printf("LL is empty\n");
        return;
    } 

    printf("<=> ");
    do
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }while(first != (last->next));

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        printf("LL is empty\n");
        return 0;
    } 

    int iCount = 0;
    do
    {
        iCount++;
        first = first->next;
    }while(first != (last->next));

    return iCount;
}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    int iSize = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    iSize = Count(*first, *last);

    if((pos < 1) || (pos > iSize+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, last, no);
    }
    else if(pos == iSize+1)
    {
        InsertLast(first, last, no);
    }
    else
    {
        temp = *first;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }

}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{
    int iSize = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    iSize = Count(*first, *last);

    if((pos < 1) || (pos > iSize))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first, last);
    }
    else if(pos == iSize)
    {
        DeleteLast(first, last);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}


int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);
    
    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    DeleteFirst(&head, &tail);

    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    DeleteLast(&head, &tail);

    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    InsertAtPos(&head, &tail, 105, 3);

    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    DeleteAtPos(&head, &tail, 3);

    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    return 0;
}