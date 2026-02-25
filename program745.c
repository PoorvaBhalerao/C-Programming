// Binary Search Tree(BST)
//Insert, Inorder Traversal, Preorder, Postorder, Search***

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)                                // if tree is empty
    {
        *first = newn;
    }
    else                                             // if tree contains at least one node
    {
        temp = *first;

        while(1)
        {
            if(no > temp->data)                     // if element is greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                
                temp = temp->rchild;
            }
            else if(no < temp->data)                // if element is smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
            else if(no == temp->data)               // if elements ae identical
            {
                printf("Unable to insert as element is already present\n");
                free(newn);
                break;
            }
        }        
    }
}

void Inorder(PNODE first)                           // L D R
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
}


void Preorder(PNODE first)                           // D L R
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        Preorder(first->lchild);        
        Preorder(first->rchild);
    }
}

void Postorder(PNODE first)                           // L R D
{
    if(first != NULL)
    {
        Postorder(first->lchild);        
        Postorder(first->rchild);
        printf("%d\n",first->data);

    }
    
}

bool Search(PNODE first, int no)
{
    bool bFlag = false;

    while(first != NULL)
    {
        if(no > first->data)
        {
            first = first->rchild;
        }
        else if(no < first->data)
        {
            first = first->lchild;
        }
        else if(no == first->data)
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
    bool bRet = false;

    Insert(&head, 21);
    Insert(&head, 11);
    Insert(&head, 51);
    Insert(&head, 67);
    Insert(&head, 40);
    Insert(&head, 10);
    Insert(&head, 13);
    Insert(&head, 38);

    printf("Inorder Traversal\n");
    Inorder(head);

    // printf("Preorder Traversal\n");
    // Preorder(head);

    // printf("Preorder Traversal\n");
    // Postorder(head);

    bRet = Search(head, 47);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("There is no such Element \n");
    }




    return 0;
}