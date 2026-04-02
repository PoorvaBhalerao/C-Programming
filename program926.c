//SLLL contsins N elements and we have to display value of last Nth element(count from end). with time complexity O(n);
//when we get Nth position first pointer pouints to tht position from first
//then mmove both pointers one by one position so difference of N is maintained and when first pointer reaches NULL display valie of second that is requeired data.

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


int LastNthNode(PNODE first, int iPos)
{
    PNODE temp1 = first;
    PNODE temp2 = first;
    int i = 0;

    if(first == NULL)
    {
        printf("LL is empty\n");
        return -1;
    }

    for(i = 1; i <= iPos; i++)
    {
        if(temp1 == NULL)
        {
            printf("Invalid Position\n");
            return -1;
        }

        temp1 = temp1->next;
    }

    while(temp1 != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return (temp2->data);
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,  11);
    InsertLast(&head,  21);
    InsertLast(&head,  51);
    InsertLast(&head,  101);
    InsertLast(&head,  111);
    InsertLast(&head,  121);
    InsertLast(&head,  151);
    InsertLast(&head,  201);


    Display(head);

    iRet = LastNthNode(head, 3);

    printf("Last Nth element is: %d\n",iRet);
   

   

    return 0;
}