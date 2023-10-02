
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
main()
{
    int n,count=0;
    struct node *start, *ptr1, *ptr2, *ptr3, *ptr4, *ptr , *preptr;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&start->data);


    ptr1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr1->data);
    start->next = ptr1;
    ptr1->next = NULL;
    ptr = start;
    printf("\nLinked list contains : ");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }

    printf("\nEnter the node number you want to delete: ");
    scanf("%d",&n);

   struct node *p1;
   p1 = start;
   ptr = start;
   preptr = start;
   while(ptr!=NULL)
{
    count++;
   if(count == n)
   {
       if(ptr->next == NULL)
       {
           p1 = ptr;
           printf("node deleted");
          free(ptr);
       }

       else if(ptr== NULL)
       {
           return;
       }
       else{
        preptr->next = ptr->next;
        free(ptr);
        p1 = preptr;
        break;
       }
   }
    preptr = ptr;
    ptr = ptr->next;

}

    ptr = start;

    printf("\n After deletion Linked list contains : ");
    while(ptr!= NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }


}
