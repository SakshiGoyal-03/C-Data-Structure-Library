#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
main()
{
    struct node *start, *ptr1, *ptr2, *ptr3, *ptr4, *ptr , *ptrs;
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
    printf("\nLinked list contains : ");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
    start = start->next;
    ptr = start;

    printf("\n After deletion Linked list contains : ");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
    free(start);

}
