#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
main()
{
    int data1,data2,data3;


    struct node *start,*ptr1,*ptr2,*n;
    printf("Enter data 1 : ");
    scanf("%d",&data1);
    start = (struct node *)malloc(sizeof(struct node));
     ptr1 = (struct node *)malloc(sizeof(struct node));
      ptr2 = (struct node *)malloc(sizeof(struct node));

    start -> data = data1;
    start -> next = ptr1;
    n = start;

    printf("\nEnter data 2 : ");
    scanf("%d",&data2);

    ptr1 -> data = data2;
    ptr1 -> next = ptr2;

    printf("\nEnter data 3 : ");
    scanf("%d",&data3);

    ptr2 -> data = data3;
    ptr2 -> next = NULL;
    printf("\nLinked list contains : \n");

    while(n != NULL)
    {
        printf("%d\n",n->data);
        n = n-> next;
    }


}
