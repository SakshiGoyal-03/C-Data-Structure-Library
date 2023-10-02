#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};

int size(struct node *root)
{
    if(root==NULL)
        return 0;
    else
        return(size(root->left)+1+size(root->right));
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

   printf("Size of a binary tree is %d",size(root));


}
