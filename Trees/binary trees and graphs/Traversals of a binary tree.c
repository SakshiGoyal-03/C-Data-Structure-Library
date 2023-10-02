#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};

void preorder(struct node *node)
{
    if(node==NULL)
        return;
    printf("%d ",node->data);
    preorder(node->left);
    preorder(node->right);
}
void inorder(struct node *root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

struct node* createtree()
{
   int x;
   struct node *p;
   printf("\nEnter data (Enter -1 for no data ): ");
   scanf("%d",&x);
   if(x==-1)
        return 0;
   p = (struct node*)malloc(sizeof(struct node));
   p->data = x;
   printf("Enter left child of %d",x);
   p->left = createtree();
   printf("Enter right child of %d",x);
   p->right = createtree();

   return p;
}


main()
{

    struct node *root;
    root = createtree();
    printf("Pre-order Traversal : \n");
    preorder(root);
    printf("\nIn-order Traversal : \n");
    inorder(root);
    printf("\nPost-order Traversal : \n");
    postorder(root);


}

