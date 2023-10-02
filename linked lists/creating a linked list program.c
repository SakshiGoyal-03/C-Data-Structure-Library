#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};
struct node* sort(struct node *start1,struct node *start2)
{
   struct node *head;
   strcut node *temp1, *temp2;
   if(start1->data > start2->data)
   {
       head = start2;
   }
   else
   {
       head = start1;
   }
   struct node *t;
   t=head;
   temp1=start1;
   temp2=start2;
   while(temp1->next!=NULL && temp2->next!=NULL)
   {
       if(temp1->data <= temp2->data)
       {
           t = temp1;
           temp1= temp1->next;
       }
       else{

       }
   }

}
main()
{
    char choice;
    struct node *start,*start2 *newnode, *ptr;

    start = NULL;
    start2=NULL;

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

     printf("for second - Do you want to create a a node(Y/N) : ");
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


}
