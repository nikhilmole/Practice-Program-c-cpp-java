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

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }
}
void InsertAtPos(PPNODE First,int No, int iPose)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;
    int iLength;

    iLength = Count(*First);

    if((iPose < 1) || (iPose > iLength+1))
    {
        printf("Invalid option");
        return;
    }
    if(iPose == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPose == iLength+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;
        for(i = 1; i < iPose-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }

}
void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;
    if(*First == NULL)
    {
        printf("Sorry Linked listr is empty");
        return;
    }
    if((*First) -> next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        *First = (*First)->next;
        free(temp);
    }
    
}
void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("Sorry nodes are empty\n");
        return;
    }
    if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;


    }
}
void DeleteAtPose(PPNODE First,int iPose)
{

}
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf(" | %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    
    InsertAtPos(&Head,121,3);
    Display(Head);

    return 0;
}