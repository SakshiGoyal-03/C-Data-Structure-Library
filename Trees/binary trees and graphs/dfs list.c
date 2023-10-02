#include<stdio.h>
#include<stdlib.h>
struct node
{
    int vertex;
    struct node *next;
};
void creategraph(struct node *adj[], int n)
{
    struct node *newnode, *last;
    int i,j,x,value;
    for(i=0;i<n;i++)
    {
        last = NULL;
        printf("Enter no. of adjacent nodes of node %d",i);
        scanf("%d",&x);
        for(j=1;j<=x;j++)
        {
            printf("Enter the %d adjacent node  of %d     ",j,i);
            scanf("%d",&value);
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->vertex = value;
            newnode->next = NULL;
            if(adj[i]==NULL)
                adj[i]=newnode;
            else
                last->next = newnode;
            last = newnode;

        }
    }

}
void dfs(struct node *adj[], int v[] , int n , int s)
{
    int i;
    v[s]=1;
    printf("%d ",s);
    struct node *ptr = adj[s];
    while(ptr!=NULL)
    {
        if(v[ptr->vertex]!=1)
        {
            dfs(adj,v,n,ptr->vertex);
        }
        ptr = ptr->next;
    }
}

main()
{
    struct node *adj[10];
    int i,j,v[10],n,s;
    printf("enter n : ");
    scanf("%d",&n);
    printf("Enter s: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
         v[i] = 0;
         adj[i] = NULL;
    }

    creategraph(adj,n);
    dfs(adj,v,n,s);
}
