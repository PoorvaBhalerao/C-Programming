// Singly Circular Linked List
//InsertFirst, InsertLast, Display, Count, DeleteFirst, DeleteLast, InsertAtPos

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
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

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;                                      //@
        //(*last)->next = *first;
    }
    else 
    {
        newn->next = *first;
        *first = newn;
        //(*last)->next = *first;        
    }

    (*last)->next = *first;                             // @
   
}

void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;                                   // @
        //(*last)->next = *first;
    }
    else 
    {
        (*last)->next = newn;                           // @
        *last = newn;                                   // @
        //(*last)->next = *first;
    }

    (*last)->next = *first;                             // @
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    if((*first == NULL) && (*last == NULL))
    {
        printf("Linked list is empty\n");
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
        PNODE temp = NULL;
        temp = *first;

        *first = (*first)->next;
        free(temp);
        (*last)->next = *first;
    }

}

void DeleteLast(PPNODE first, PPNODE last)
{
    if((*first == NULL) && (*last == NULL))
    {
        printf("Linked list is empty\n");
        return;
    }
    else if(*first == *last)                     // if LL contains only one node
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = *first;

        while(temp->next != *last)
        {
            temp = temp->next;
        }

        free(*last);
        *last = temp;
        (*last)->next = *first;
    }

}

void Display(PNODE first, PNODE last)
{
    printf(" -> ");
    do
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    } while(first != last->next);              // while(last->next != first)

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    do
    {
        iCount++;
        first = first->next;
    } while (first != last->next);
    
    return iCount;
}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    int iSize = 0;
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
        PNODE temp = NULL;
        PNODE newn = NULL;
        int iCnt = 0;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        temp = *first;

        for(iCnt = 1; iCnt <pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{
    int iSize = 0;
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
        DeleeLast(first, last);
    }
    else
    {

    }
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;                              // @
    int iRet = 0;

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head, &tail, 151, 3);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n",iRet);



    return 0;
}
