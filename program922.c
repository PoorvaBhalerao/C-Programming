// We have information about Students and students are standed as per singly linear linked list so last kids hand is in his pocket But as they are small kids last kid stops the hand of any middle kid
//so display function runs again and again circularly it is a bug so check whether there is loop or not.(actual logic starts)

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

bool CheckLoop(PNODE first)
{
    PNODE fast = first;
    PNODE slow = first;
    bool bFlag = false;

    while(fast != NULL && fast->next != NULL)       // Tortoise Algorithm      ..... sequence of conditions is important
                                                    
                                                    // in && operator if first condiion is false then second will not be checked 
                                                    // because 0 && is always 0 it is short circuit operation
                                                    // in || operatior if first condition is true then second will not be checked 
                                                    //because  1 || anything is always 1 it is also short circuit operation
    {
        fast = fast->next->next;

        if(fast == slow)                // if loop is there
        {
            bFlag = true;
            break;
        }
        
        slow = slow->next;

        if(fast == slow)                // if loop is there
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}


int main()
{
    PNODE head = NULL;
    int Pos = 4, i = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    bool bRet = false;


    InsertLast(&head,  11);
    InsertLast(&head,  21);
    InsertLast(&head,  51);
    InsertLast(&head,  101);
    InsertLast(&head,  111);
    InsertLast(&head,  121);
    InsertLast(&head,  151);

    Display(head);

    temp1 = head;
    temp2 = head;

    //temp2 = temp2->next->next;
    for(i = 1; i<Pos; i++)
    {
        temp1 = temp1->next;
    }

    //temp2 = temp2->next->next->next->next->next->next;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    //temp2->next = temp1;                // to create the loop

    if(bRet == true)
    {
        printf("Loop detected in SLLL\n");
    }
    else
    {
        printf("Loop is not detected\n");
    }

    return 0;
}