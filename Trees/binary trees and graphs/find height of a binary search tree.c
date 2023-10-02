#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int height(struct node *root)
{

    int lheight = 0;
    int rheight = 0;
    if(root == NULL)
    {
        return 0;
    }
    lheight = height(root->left);
    rheight = height(root->right);
    if(lheight > rheight)
    {
        return (lheight + 1);
    }
    else
       return (rheight + 1);
}
void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);

}
struct node* insert(struct node *root, int value)
{
    if(root==NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->left = root->right = NULL;
        root->data = value;
        return(root);
    }
    else
    {
        if(value < root->data)
        {
            root->left = insert(root->left,value);
        }
        else
            root->right = insert(root->right,value);

        return(root);
    }
}

main()
{
    int value,ch,key;
    struct node *root;
    int flag;
    root =(struct node*)malloc(sizeof(struct node));
    root = NULL;
    printf("Enter 1 for inserting an element : \n");
    printf("Enter 2 for height: \n");
    printf("Enter 3 for exit :\n");

    do
    {
        printf("Enter your choice:  ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter an element for insertion  :");
            scanf("%d",&value);
            root = insert(root,value);
            break;
        case 2:
            printf("Height of tree is %d\n",height(root));
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            exit;
        }
    }while(ch!=4);
}


