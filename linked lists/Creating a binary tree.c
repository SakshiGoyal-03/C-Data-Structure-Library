#include<stdio.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
struct node* create()
{
    struct node *newnode;
    int x;
    printf("\nEnter data (Enter -1 for no data): ");
    scanf("%d",&x);
    if(x==-1)
        return;
    newnode  = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    printf("Enter left child of %d: ",x);
    newnode->lchild = create();
    printf("Enter right child of %d: ",x);
    newnode->rchild = create();

    return newnode;
}
main()
{
    struct node *root;
    root = create();
}
