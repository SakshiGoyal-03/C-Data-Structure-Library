#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};

struct node *sort(struct node *head)
{
  struct node *prev = head;
  struct node *temp;
  struct node *cur = head->next;

  while(cur!=NULL)
  {
      if((prev->data) > (cur->data))
      {
          temp = prev->data;
          prev->data = cur->data;
          cur->data = temp;
          prev = prev->next ;
          cur = cur->next;
      }
      else
      {
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
    start = sort(start);
    ptr = start;
    printf("Sort list contains\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
