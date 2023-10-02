#include<stdio.h>
#include<limits.h>
struct node
{
    int vertex;
    int weight;
    struct node *next;
};
void creategraph(struct node *adj[], int n)
{
    struct node *newnode, *last;
    int i,j,x,value,w;
    for(i=0;i<n;i++)
    {
        last = NULL;
        printf("Enter no. of adjacent nodes of node %d",i);
        scanf("%d",&x);
        for(j=1;j<=x;j++)
        {
            printf("Enter the %d adjacent node  of %d  and weight:    ",j,i);
            scanf("%d %d",&value, &w);
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->vertex = value;
            newnode->weight = w;
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
    struct node *adj[10], *ptr;
    int i,j,x,y,min,tv[10],ne,v,s,cost=0;
    printf("Enter no. of vertices: ");
    scanf("%d",&v);
    for(i=0;i<v;i++)
        adj[i]=NULL;
    creategraph(adj,v);
    printf("Enter the starting vertex: ");
    scanf("%d",&s);
    for(i=0;i<v;i++)
        tv[i]=0;
    ne=0;
    tv[s]=1;
    printf("Edge-Edge:  Weight : \n ");
    while(ne<v-1)
    {
        min = INT_MAX;
        x=0;
        y=0;
        for(i=0;i<v;i++)
        {

            if(tv[i]==1)
            {

                  ptr = adj[i];
                  while(ptr!=NULL)
                  {

                      if(tv[ptr->vertex]==0)
                      {
                          if(min > ptr->weight)
                          {
                              x=i;
                              y = ptr->vertex;
                              min = ptr->weight;
                          }
                      }
                      ptr = ptr->next;
                  }
            }
        }
        printf("%d-%d ; %d \n ",x,y,min);
        cost+=min;
        ne++;
        tv[y]=1;
    }
    printf("Total cost of spanning tree is = %d ",cost);
}

