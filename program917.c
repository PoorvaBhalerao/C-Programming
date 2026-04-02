// We have information about students(name and marks) and that data is stores in linear data structure in increasing order
//so write a logic to accept marks of students in linear data structure from user and return middle student name.           -----3 ****
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


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|  %d  | -> ",(first->data));
        first = first->next;
    }
    printf("NULL\n");
}

int MiddleElement(PNODE first)
{
    int iMid = 0, iPos = 0, i = 0;
    int iCount = 0;

    PNODE temp = first;

    while(temp != 0)
    {
        iCount++;
        temp = temp->next;
    }

    if(iCount % 2 != 0)
    {
        iPos = (iCount / 2) + 1;
    }
    else
    {
        iPos = (iCount / 2);
    }

    temp = first;
    for(i = 1; i< iPos; i++ )
    {
        temp = temp->next;
    }

    iMid = temp->data;

    return iMid;
    

}

//OR
//time complexity: O(n) + O(n/2)
int MiddleElement1(PNODE first)
{
    int iCount = 0, Middle = 0, i = 0;
    PNODE temp = first;

    while(first != NULL)        //O(n)
    {
        iCount++;
        first = first->next;
    }

    Middle = (iCount / 2) + 1;

    first = temp;

    for(i = 1; i < Middle; i++) //O(n/2)
    {
        first = first->next;
    }

    return (first->data);

}

int MiddleElementX(PNODE first)         // Tortois Algorithm **** time complecity O(n/2)
{
    PNODE Fast = first;
    PNODE Slow = first;

    while(Fast != NULL && Fast->next != NULL)
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }

    return (Slow->data);

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

    Display(head);

    //printf("Middle element is: %d\n",MiddleElement(head)); 

    // iRet = MiddleElement1(head);
    // printf("Middle element is: %d\n",iRet);

    printf("Middle Element is: %d\n",MiddleElementX(head));

    return 0;
}