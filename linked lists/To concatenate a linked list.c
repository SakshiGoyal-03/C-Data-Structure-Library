
#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};
void concatenate(struct node *head1, struct node *head2)
{
    struct node *cur;
    cur = head1;
    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = head2;
}
main()
{
    char choice;
    struct node *start1, *newnode, *ptr, *start2;

    start1 = NULL;
    start2 = NULL;

    printf("Creating first list \n");
    printf("Do you want to create a node(Y/N) : ");
    scanf("%c",&choice);

    while (choice == 'Y')
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :  ");
        scanf("%d",&newnode -> data);
        if(start1 == NULL)
        {
            start1 = newnode;
            start1 -> next = NULL;
        }
        else
        {
           ptr = start1;
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

    printf("Creating second list \n");
    fflush(stdin);
    printf("Do you want to create a node(Y/N) : ");
    scanf("%c",&choice);

    while (choice == 'Y')
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :  ");
        scanf("%d",&newnode -> data);
        if(start2 == NULL)
        {
            start2 = newnode;
            start2 -> next = NULL;
        }
        else
        {
           ptr = start2;
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
    concatenate(start1,start2);
    ptr = start1;
    printf("Concatenating of list is \n");
   while(ptr !=NULL)
   {
       printf("%d  ",ptr->data);
       ptr = ptr->next;
   }
}
