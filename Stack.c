//Queue
//enqueue, dequeue, display, count

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void push(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int pop(PPNODE first)
{
    int iValue = 0;
    PNODE temp = NULL;
    if(*first == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else if((*first)->next == NULL)
    {
        iValue = (*first)->data;
        free(*first);
        *first = NULL;
    }
    else
    {
        iValue = (*first)->data;
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
    return iValue;
}

int peep(PPNODE first)
{
    int iValue = 0;
    PNODE temp = NULL;
    if(*first == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    iValue = (*first)->data;
    return iValue;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|\t%d\t|\n",first->data);
        first = first->next;
    }
    printf("\n");
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


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    push(&head, 51);
    push(&head, 21);
    push(&head, 11);
    push(&head, 1);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    iRet = peep(&head);
    printf("Element on top is %d\n",iRet);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    iRet = pop(&head);
    printf("Removed element is: %d\n",iRet);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    iRet = pop(&head);
    printf("Removed element is: %d\n",iRet);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    push(&head, 50);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);



    return 0;
}



