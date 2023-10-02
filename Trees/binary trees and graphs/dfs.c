#include<stdio.h>
#include<stdlib.h>
void dfs(int adj[][10], int v[] , int n , int s)
{
    int i;
    v[s]=1;
    printf("%d ",s);
    for(i=0;i<n;i++)
    {
        if(adj[s][i]==1 && v[i]!=1)
        {
            dfs(adj,v,n,i);
        }
    }
}
main()
{
    int adj[10][10];
    int i,j,v[10],n,s;
    printf("enter n : ");
    scanf("%d",&n);
    printf("Enter s: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
        v[i] = 0;
    for(i = 0; i<n;i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("is %d adjacent to %d",j,i);
            scanf("%d",&adj[i][j]);
        }
    }
    dfs(adj,v,n,s);
}
