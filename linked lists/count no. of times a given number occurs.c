#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};

int countTimes(struct node *head,int key)
{
    int count = 0;
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
      if(ptr->data == key)
       {
        count++;
       }
      ptr = ptr->next;
    }
    printf("%d",count);
    return count;

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
    int key, count;
    printf("\nEnter a number : ");
    scanf("%d",&key);

    count= countTimes(start,key);
    printf("\n%d occurs %d times in a list ",key,count);
}

