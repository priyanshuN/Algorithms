#include <stdio.h>
#include <limits.h>
#include<stdbool.h>
#define INT_MAX1 9999999
int V;

int minnode(int node[], bool set[])
{

int min = INT_MAX1, least_i;
int v;
for (v = 0; v < V; v++)
    if (set[v] == false && node[v] < min)
        min = node[v], least_i = v;

return least_i;
}
void print1(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
}
int print(int head[], int n, int adj[V][V])
{
printf("Edge \tWeight\n");
int i;
for (i = 1; i < V; i++)
    printf("%d - %d \t%d \n", head[i], i, adj[i][head[i]]);
}
void prim(int adj[V][V])
{
    int head[V];
    int node[V];
    bool set[V];
    int i;
    for (i = 0; i < V; i++)
        node[i] = INT_MAX, set[i] = false;
    node[0] = 0;
    head[0] = -1;
    int count;
    for (count = 0; count < V-1; count++)
    {
        int u = minnode(node, set);
        set[u] = true;
        int v;
        for (v = 0; v < V; v++)
            if (adj[u][v] && set[v] == false && adj[u][v] < node[v])
                head[v] = u, node[v] = adj[u][v];
    }
    print(head, V, adj);
}
int main()
{
    int n,k,x,y,z;
    printf("No of towers to be built : ");
    scanf("%d",&n);
    V=n;
    int adj[V][V];
    int j,h;
    for(j=0;j<V;++j)
    {
        for(h=0;h<V;++h)
        {
            adj[j][h]=0;
        }
    }
    printf("No of roads that are feasible : ");
    scanf("%d",&k);
    int i;
    printf("Enter vertex 1,vertex 2 and value sequencially\n");
    for(i=0;i<k;++i)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        adj[x][y]=z;
        adj[y][x]=z;
    }
    prim(adj);

    return 0;
}

