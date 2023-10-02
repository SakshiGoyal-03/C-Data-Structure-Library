#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};


struct node *start=NULL;
void insertend()
{
    int value;
    struct node *newnode,*ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element to be inserted : ");
    scanf("%d",&value);
    newnode->data = value;

    ptr = start;
    while(ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = start;
}
void createcirlist()
{
    struct node *newnode;
    char ch;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);

  if(start == NULL)
  {
      start = newnode;
      start->next = start;
  }
    fflush(stdin);
    printf("\nDo you want to continue(Y/N)");
    scanf("%c",&ch);

    while(ch == 'Y')
    {
        insertend();
        fflush(stdin);
        printf("\nDo you want to continue(Y/N)");

        scanf("%c",&ch);
    }

}


main()
 {
    int choice,value;

    printf("\n1. Creating a linked list");
    printf("\n2. Inserting a node at the beginning ");
    printf("\n3. Inserting a node at the end");
    printf("\n4. Deleting first node ");
    printf("\n5. Deleting last node");
    printf("\n6. Traversal");
    printf("\n7. Exit");



 do
 {
     printf("\nEnter your choice (1 to 7...)");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1:
            createcirlist();
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;
     }

 } while(choice !=7);
 }
