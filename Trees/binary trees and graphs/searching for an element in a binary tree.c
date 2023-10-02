#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *left;
 struct node *right;
};
int search(struct node *root, int key)
{
    int res1,res2;
    if(root==NULL)
        return 0;
    if(root->data == key)
        return 1;
    res1 = search(root->left,key);
    if(res1!=0)
        return 1;
    res2 = search(root->right,key);
     return res2;
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
    int key;
    printf("Enter element for searching: ");
    scanf("%d",&key);
    int flag = search(root,key);
    if(flag==0)
        printf("%d is not found in the binary tree",key);
    else
        printf("%d is found in a binary tree",key);
}

