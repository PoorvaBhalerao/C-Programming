// Doubly Circular Linked List
//InsertFirst, Display(segmentation fault due to Display and count), Count, InsertLast

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
    // else if(*first == *last)                // LL contains one node
    // {                                       // no need to write else if statement as it is same as else statement 
    //     newn->next = *first;
    //     (*first)->prev = newn;
    //     *first = newn;
    //     //(*last)->next = *first;
    //     //(*first)->prev = *last;
    // }
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
{}

void DeleteLast(PPNODE first, PPNODE last)
{}

void Display(PNODE first, PNODE last)
{
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
    int iCount = 0;
    do
    {
        iCount++;
        first = first->next;
    }while(first != (last->next));

    return iCount;
}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{}

//segmentation fault due to Display and count as Insert not mentioned
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;
/*
    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);
*/
    
    Display(head, tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d\n",iRet);

    return 0;
}