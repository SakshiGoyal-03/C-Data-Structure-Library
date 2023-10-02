#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};

struct node *middle(struct node *head)
{
    struct node *fast, *slow;
    slow = head;
    fast = head->next;

    while(fast != NULL)
    {
        fast = fast->next;
        if(fast !=NULL)
            fast = fast->next;
        slow = slow->next;
    }

    return slow;
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
   struct node *mid;
   mid =  middle(start);

   printf("Middle element is = %d", mid->data);
}
