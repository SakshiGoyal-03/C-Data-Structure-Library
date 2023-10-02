#include<stdio.h>
#include<limits.h>
main()
{
    int i,j,x,y,min,adj[10][10],tv[10],ne,v,s,cost=0;
    printf("Enter no. of vertices: ");
    scanf("%d",&v);
    printf("Enter adjacency matrix:  ");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    }
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

                for(j=0;j<v;j++)
                {
                    if(tv[j]==0 && adj[i][j]!=0)
                    {

                        if(min > adj[i][j])
                        {

                            x=i;
                            y=j;
                            min = adj[i][j];
                        }
                    }
                }
            }
        }
        printf("%d-%d ; %d \n ",x,y,adj[x][y]);
        cost+=adj[x][y];
        ne++;
        tv[y]=1;
    }
    printf("Total cost of spanning tree is = %d ",cost);
}
