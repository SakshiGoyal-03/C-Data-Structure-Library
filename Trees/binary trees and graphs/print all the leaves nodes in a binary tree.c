#include<stdio.h>
#include<stdlib.h>
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

void printleafnode(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    else if(root->left == NULL && root->right == NULL)
       printf("%d  ",root->data);
    else
        printleafnode(root->left);
        printleafnode(root->right);

}
int countleafnode(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else if(root->left == NULL && root->right == NULL)
        return 1;
    else
       return(countleafnode(root->left) + countleafnode(root->right));

}
main()
{

    struct node *root;
    root = createtree();
    printf("Leaves nodes of a tree is : \n");
    printleafnode(root);
    printf("\n%d",countleafnode(root));
}

