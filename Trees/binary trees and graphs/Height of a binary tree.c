#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
int maxDepth(struct node *node)
{

    if (node == NULL)
        return 0;
    else {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if( lDepth > rDepth)
        {

            return lDepth + 1;
        }

        else
        {

             return rDepth + 1;
        }

    }
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
    struct node *root = NULL;
    root = createtree();
    printf("Height of tree is %d",maxDepth(root) );
}

