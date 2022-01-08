#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Edge
{
    int src, dest, weight;
};
struct Graph
{
    int V, E;
    struct Edge* edge;
};
struct Graph* build(int V, int E)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;

    graph->edge = (struct Edge*)malloc(sizeof(struct Edge[E]));

    return graph;
}
struct subset
{
    int head;
    int rank;
};
int find(struct subset part[], int i)
{
    if (part[i].head != i)
        part[i].head = find(part, part[i].head);
    return part[i].head;
}
void Union(struct subset part[], int x, int y)
{
    int xkey = find(part, x);
    int ykey = find(part, y);
    if (part[xkey].rank < part[ykey].rank)
        part[xkey].head = ykey;
    else if (part[xkey].rank > part[ykey].rank)
        part[ykey].head = xkey;
    else
    {
        part[ykey].head = xkey;
        part[xkey].rank++;
    }
}
int myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}
void kruska(struct Graph* graph)
{
    int V = graph->V,v;
    struct Edge result[V];
    int e = 0;
    int i = 0;
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
    struct subset *part =
        (struct subset*) malloc( V * sizeof(struct subset) );
    for ( v = 0; v < V; ++v)
    {
        part[v].head = v;
        part[v].rank = 0;
    }
    while (e < V - 1)
    {
        struct Edge edge_next = graph->edge[i++];
        int x = find(part, edge_next.src);
        int y = find(part, edge_next.dest);
        if (x != y)
        {
            result[e++] = edge_next;
            Union(part, x, y);
        }
    }
    printf("Following are the edges in the constructed MST\n");
    for (i = 0; i < e; ++i)
        printf("%d -- %d == %d\n", result[i].src, result[i].dest,
                                                 result[i].weight);
    return;
}
int main()
{
    int n,k,x,y,z;
    printf("No of towers to be built : ");
    scanf("%d",&n);
    printf("No of roads that are feasible : ");
    scanf("%d",&k);
    int i;
    struct Graph* graph = build(n, k);
    printf("Enter vertex 1,vertex 2 and value sequencially\n");
    for(i=0;i<k;++i)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        graph->edge[i].src = x;
        graph->edge[i].dest = y;
        graph->edge[i].weight = z;
    }

    kruska(graph);

    return 0;
}

