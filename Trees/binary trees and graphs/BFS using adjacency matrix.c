#include<stdio.h>
main()
{
    int adj[20][20],i,j,n,flag;
    int q[10],front = -1, rear= -1,s,v[10],x;
    printf("Enter total no of nodes in a graph G: ");
    scanf("%d",&n);

    //representing a graph using adjacency matrix

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("Enter 1 if there is an edge from %d to %d , otherwise 0:",i,j );
            scanf("%d",&flag);
            if(flag == 1)
                adj[i][j] = 1;
            else
                adj[i][j] = 0;
        }
    }
    //BFS implementation
    printf("Enter starting node : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
        v[i]=0;
    rear++;
    q[rear] = s;
    front++;
    v[s] = 1;
    while(front<=rear)
    {
        x = q[front];
        front++;
        v[x] = 1;
        printf("%d ",x);
        for(i=0;i<n;i++)
        {
            if(adj[x][i]==1 && v[i]!=1)
            {
                rear++;
                q[rear] = i;
                v[i]=1;
            }
        }
    }

}
