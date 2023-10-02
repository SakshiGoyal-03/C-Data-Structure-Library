#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
int findmax(struct node *root)
{
  int res;
  int l;
  int r;
  if(root == NULL)
  {
    return INT_MIN;
  }
  res = root->data;
  l = findmax(root->left);
  r = findmax(root->right);
  if(l>res)
     res = l;

  if(r> res)
      res = r;

   return res;
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
    int m = findmax(root);
     printf(" Maximum element in a binary tree is %d ",m);

}

