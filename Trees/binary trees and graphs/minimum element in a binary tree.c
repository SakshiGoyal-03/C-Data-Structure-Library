#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};

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

int minimum(struct node *root)
{
    int result;
    int left;
    int right;

    if(root == NULL)
        return INT_MAX;
    result = root->data;
    left = minimum(root->left);
    right = minimum(root->right);

    if(left < result)
        result = left;
    if(right < result)
        result = right;
     return result;
}
main()
{

    struct node *root;
    root = createtree();
    printf("Minimum element in a binary tree is %d",minimum(root));
}
