// In SLLL all information is arranged in ascending order. so write a program to convert it in descending order(actual data has to be reversed not only display).*****

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


//Time Complexity: O(3n)
//Space Complecity: O(n)
void Reverse(PPNODE first)
{
    int *Arr = NULL;
    int iCount = 0, i = 0;
    PNODE temp = *first;

    while(temp != NULL)             // O(n)
    {
        iCount++;
        temp = temp->next;
    }

    //space complecity: N
    Arr = (int *)malloc(sizeof(int) * iCount);

    temp = *first;

    while(temp != NULL)             // O(n)
    {
        Arr[i] = temp->data;
        i++;
        temp = temp->next;

    }

    temp = *first;

    iCount--;
    while(temp != NULL)             // O(n)
    {
        temp->data = Arr[iCount];
        iCount--;
        temp = temp->next;
    }    

    free(Arr);
}


int main()
{
    PNODE head = NULL;


    InsertLast(&head,  11);
    InsertLast(&head,  21);
    InsertLast(&head,  51);
    InsertLast(&head,  101);

    Display(head);

    Reverse(&head);

    printf("LL After Reversal:\n");
    Display(head);

   

    return 0;
}