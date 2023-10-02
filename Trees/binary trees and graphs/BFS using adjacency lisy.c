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
main()
{
    struct node *adj[10];
    int i,n;
    printf("Enter no. of nodes in G: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        adj[i]=NULL;
    creategraph(adj,n);

    int q[10],v[10],front = -1, rear =-1,s,x;
    struct node *ptr;
    printf("enter starting node : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
        v[i]=0;
    rear++;
    q[rear]=s;
    front++;
    v[s]=1;
    while(front<=rear)
    {
        x=q[front];
        front++;
        ptr = adj[x];
        printf("%d ",x);
        while(ptr!=NULL)
        {
            if(v[ptr->vertex]!=1)
            {

                rear++;
                q[rear] = ptr->vertex;
                v[ptr->vertex] = 1;

            }
            ptr = ptr->next;
        }
    }

}
