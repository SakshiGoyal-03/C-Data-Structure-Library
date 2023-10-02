#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};

struct node *deleteduplicate(struct node *head)
{
    struct node *temp;
    struct node *prev;
    struct node *cur;
    prev = head;
    cur = head->next;

    while(cur!=NULL)
    {
        if(prev->data == cur->data)
        {
            temp = cur->next;
            prev->next = cur->next;
            free(cur);
            prev = prev->next;
            cur = temp->next;
        }
        else{
            prev = prev->next;
            cur = cur->next;
        }
    }
    return head;
}
main()
{
    char choice;
    struct node *start, *newnode, *ptr;

    start = NULL;

    printf("Do you want to create a a node(Y/N) : ");
    scanf("%c",&choice);

    while (choice == 'Y')
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :  ");
        scanf("%d",&newnode -> data);
        if(start == NULL)
        {
            start = newnode;
            start -> next = NULL;
        }
        else
        {
           ptr = start;
           while(ptr->next != NULL)
           {
               ptr = ptr->next;
           }
           ptr -> next = newnode;
           newnode -> next = NULL;
        }
        fflush(stdin);
        printf("Do you want a create a node again(Y/N) :  ");
        scanf("%c",&choice);

    }
    start = deleteduplicate(start);
    ptr = start;
    while(ptr!=NULL)
    {
        printf("Data = %d\n",ptr->data);
        ptr = ptr->next;
    }
}

