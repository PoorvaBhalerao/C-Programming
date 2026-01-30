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

void enqueue(PPNODE first, int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else if((*first)->next == NULL)
    {
        (*first)->next = newn;
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

int dequeue(PPNODE first)
{
    int iValue = 0;
    PNODE temp = NULL;
    if(*first == NULL)
    {
        printf("Queue is empty\n");
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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|  %d  | - ",first->data);
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

    enqueue(&head, 51);
    enqueue(&head, 21);
    enqueue(&head, 11);
    enqueue(&head, 1);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    iRet = dequeue(&head);
    printf("Removed element is: %d\n",iRet);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    iRet = dequeue(&head);
    printf("Removed element is: %d\n",iRet);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);

    enqueue(&head, 50);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are: %d\n\n",iRet);



    return 0;
}



