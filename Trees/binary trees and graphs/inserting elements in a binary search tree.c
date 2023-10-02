#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* insert(struct node *root, int value)
{
 struct node *newnode;
 struct node *temp,*prev;
 temp =  root;
 prev = NULL;
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = value;
 newnode->left = NULL;
 newnode->right = NULL;

 if(root==NULL)
 {
     root = newnode;
     return(root);
 }
 while(temp!=NULL)
 {
     prev = temp;
    if(value >= root->data)
       temp =temp->right;
   else
       temp = temp->left;

 }
 if(prev->data<value)
 {
     prev->left = newnode;
 }
 else
    prev->right = newnode;

 return(root);


}
int size(struct node *root)
{
    if(root==NULL)
        return 0;
    else
        return(size(root->left)+1+size(root->right));
}
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
main()
{
    int value,ch;
    struct node *root;
    root =(struct node*)malloc(sizeof(struct node));
    root =NULL;
    printf("Enter 1 for inserting an element : \n");
    printf("Enter 2 for no insertion : \n");

    do
    {
        printf("Enter your choice:  ");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:
            printf("Enter an element for insertion  :");
            scanf("%d",&value);
            root= insert(root,value);
            break;
        case 2:
            printf("%d ",size(root));
            printf("%d ",maxDepth(root));
            break;
        case 3:
            exit;

        }
    }while(ch!=3);

}
