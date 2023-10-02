#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};
struct node *reverselist(struct node *head)
{
  struct node *prev;
  struct node *current;
  struct node *temp;

  prev = NULL;
  current = head;

  while(current != NULL)
  {
      temp = current->next;
      current->next = prev;
      prev = current;
      current = temp;
  }
  return prev;
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
            start->next = NULL;
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
   start = reverselist(start);
   printf("Reverse list is \n");
   ptr = start;
   while(start!=NULL)
   {
      printf("%d\n",ptr->data);
      ptr = ptr->next;
   }
}
