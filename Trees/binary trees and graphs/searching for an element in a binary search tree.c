#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int search(struct node *root, int key)
{

    struct node  *temp;
    temp = root;
    while(temp!=NULL)
    {
    if(temp->data == key)
        return 1;
    else if(temp->data > key)
        temp = temp->left;
    else
        temp = temp->right;
    }
    return 0;
}
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
 if(prev->data < value)
 {
     prev->left = newnode;
 }
 else
    prev->right = newnode;

 return(root);
}
main()
{
    int value,x,key;
    char ch;
    struct node *root;
    int flag;
    root =(struct node*)malloc(sizeof(struct node));
    root = NULL;
    printf("Are you want to insert a node (Enter Y for Yes and N for No)");
    fflush(stdin);
    scanf("%c",&ch);
    while(ch == 'Y')
    {

              printf("Enter data : ");
              scanf("%d",&value);
              root = insert(root,value);
              printf("Are you want to insert a node  again : ");
              fflush(stdin);
              scanf("%c",&ch);
    }
    printf("Enter element to be searched : \n");
    scanf("%d",&x);

    flag = search(root,x);
    printf("%d",flag);
    if(flag)
    {
        printf("%d is found in a binary search tree ",x);
    }
    else
        printf("%d is not found in a binary search tree ",x);


}


