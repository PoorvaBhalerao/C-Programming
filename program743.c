// Binary Search Tree(BST)
//Insert, Inorder Display, preorder

#include<stdio.h>
#include<stdlib.h>

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


int main()
{
    PNODE head = NULL;

    Insert(&head, 21);
    Insert(&head, 11);
    Insert(&head, 51);

    printf("Inorder Traversal\n");
    Inorder(head);

    printf("Preorder Traversal\n");
    Preorder(head);




    return 0;
}