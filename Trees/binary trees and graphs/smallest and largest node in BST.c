#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

struct node* insert(struct node *root, int value)
{
    struct node *newnode,*prev,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->lchild = NULL;
    newnode->rchild = NULL;

    if(root == NULL)
    {
        root = newnode;
        return root;
    }
    else
    {
        temp = root;
        prev = NULL;

        while(temp!=NULL)
        {
            prev = temp;
            if(temp->data > value)
                temp = temp->lchild;
            else
                temp = temp->rchild;
        }
        if(prev->data > value)
            prev->lchild = newnode;
        else
            prev->rchild = newnode;

    }
    return root;

}
int smallest(struct node *root)
{
    struct node *temp;
    temp = root;
    while(temp->lchild!=NULL)
    {
        temp = temp->lchild;
    }
    return(temp->data);
}
int largest(struct node *root)
{
    struct node *temp;
    temp = root;
    while(temp->rchild != NULL)
    {
        temp = temp->rchild;
    }
    return(temp->data);
}
main()
{
    struct node *root;
    int value;
    int choice;
    root = (struct node*)malloc(sizeof(struct node));
    root = NULL;

    printf("Creating a tree \n");
    do
    {
          printf("Enter an element : ");
          scanf("%d",&value);
          if(value == -1)
            break;
           root = insert(root,value);
    }while(value!=-1);
    printf("Smallest node of a BST is %d",smallest(root));
    printf("\nLargest node of a BST is %d",largest(root));
}
