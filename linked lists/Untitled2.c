#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

main()
 {
    struct node *start = NULL;
    int choice,value;

    printf("\n1. Creating a linked list");
    printf("\n2. Inserting a node at the begining ");
    printf("\n3. Inserting a node at the end");
    printf("\n4. Deleting first node ");
    printf("\n5. Deleting last node");
    printf("\n6. Traversal");
    printf("\n7. Exit");

    do
    {
        printf("\nEnter your choice ...");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\ncreation");
            break;

            case 2:
            printf("\nEnter element to be inserted : ");
            scanf("%d",&value);
            break;

            case 3:
            printf("Enter element to be inserted : ");
            scanf("%d",&value);
            break;


            case 7:
            exit(0);

        }
    }while(choice!=7);

 }

