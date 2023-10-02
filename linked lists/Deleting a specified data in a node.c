#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
main()
{
    int key;
    struct node *start, *ptr1, *ptr2, *ptr3, *ptr4, *ptr , *preptr;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&start->data);

    ptr1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr1->data);
    start->next = ptr1;

    ptr2 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr2->data);
    ptr1->next = ptr2;

    ptr3 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr3->data);
    ptr2->next = ptr3;

    ptr4 = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr4->data);

    ptr3->next = ptr4;

    ptr4->next = NULL;
    ptr = start;

    //traversal of a linked list
    printf("\nLinked list contains : ");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
    //traversal ends

    printf("\nEnter a data to be deleted : ");
    scanf("%d",&key);

    // deleting a specified node
    ptr = start;
    preptr = start;
    while(ptr->data != key)
    {
       preptr = ptr;
       ptr = ptr->next;
    }

    preptr->next = ptr->next;

  // ends

    ptr = start;

    printf("\nAfter deletion Linked list contains : ");
    while(ptr!= NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }


}


