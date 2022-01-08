#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include<stdbool.h>
#include<string.h>
struct neibhournode
{
    int dest;
    int weight;
	int mark;
    struct neibhournode* next;
};
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
}
struct neighbour
{
    struct neibhournode *head;
};
struct pipes
{
    int con;
    int valuesds;
};
struct Graph
{
    int V;
    struct neighbour* arr;
};
void print1(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
}
struct neibhournode* newneibhournode(int dest, int weight)
{
    struct neibhournode* latestnode =
            (struct neibhournode*) malloc(sizeof(struct neibhournode));
    latestnode->dest = dest;
    latestnode->weight = weight;
    latestnode->next = NULL;
    return latestnode;
}

struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;

        struct neibhournode* water;

    graph->arr = (struct neighbour*) malloc(V * sizeof(struct neighbour));
    int i;
    for (i = 0; i < V; ++i)
        graph->arr[i].head = NULL;

    return graph;
}
void ad_edge(struct Graph* graph, int src, int dest, int weight)
{
    struct neibhournode* latestnode = newneibhournode(dest, weight);
    latestnode->next = graph->arr[src].head;
    graph->arr[src].head = latestnode;

    latestnode = newneibhournode(src, weight);
    latestnode->next = graph->arr[dest].head;
    graph->arr[dest].head = latestnode;
    int i;
    int a236[10];
}
struct stackNode
{
    int  v;
    int length;
    int mark;
};

struct stack
{
    int size;
    int capacity;
    int *location;
    struct stackNode **arr;
};

struct stackNode* newstackNode(int v, int length)
{
    struct stackNode* stackNode =
           (struct stackNode*) malloc(sizeof(struct stackNode));
    stackNode->v = v;
    stackNode->length = length;
    return stackNode;
}

struct stack* createstack(int capacity)
{
    struct stack* stack =
         (struct stack*) malloc(sizeof(struct stack));
    stack->location = (int *)malloc(capacity * sizeof(int));
    stack->size = 0;
    stack->capacity = capacity;
    stack->arr = (struct stackNode*) malloc(capacity * sizeof(struct stackNode));
    return stack;
}

void swapstackNode(struct stackNode** a, struct stackNode** b)
{
    struct stackNode* t = *a;
    *a = *b;
    *b = t;
}


void sta_ckify(struct stack* stack, int idx)
{
    int smallest, left, right;
    smallest = idx;
    left = 2 * idx + 1;
    right = 2 * idx + 2;

    if (left < stack->size &&
        stack->arr[left]->length < stack->arr[smallest]->length )
      smallest = left;

    if (right < stack->size &&
        stack->arr[right]->length < stack->arr[smallest]->length )
      smallest = right;

    if (smallest != idx)
    {

        struct stackNode *smallestNode = stack->arr[smallest];
        struct stackNode *idxNode = stack->arr[idx];

        stack->location[smallestNode->v] = idx;
        stack->location[idxNode->v] = smallest;


        swapstackNode(&stack->arr[smallest], &stack->arr[idx]);

        sta_ckify(stack, smallest);
    }
}
void check(int w)
{
    int i=0,l1,b1[6];
    for(i=0;i<l1;++i)
    {
        if(b1[i]==w)
            return;
    }
    b1[l1++]=w;
}
int isnull(struct stack* stack)
{
    return stack->size == 0;
}

struct stackNode* extractMin(struct stack* stack)
{
    if (isnull(stack))
        return NULL;


    struct stackNode* root = stack->arr[0];


    struct stackNode* lastNode = stack->arr[stack->size - 1];
    stack->arr[0] = lastNode;


    stack->location[root->v] = stack->size-1;
    stack->location[lastNode->v] = 0;

    --stack->size;
    sta_ckify(stack, 0);

    return root;
}

void decrement(struct stack* stack, int v, int length)
{

    int i = stack->location[v];


    stack->arr[i]->length = length;


    while (i && stack->arr[i]->length < stack->arr[(i - 1) / 2]->length)
    {

        stack->location[stack->arr[i]->v] = (i-1)/2;
        stack->location[stack->arr[(i-1)/2]->v] = i;
        swapstackNode(&stack->arr[i],  &stack->arr[(i - 1) / 2]);

        i = (i - 1) / 2;
    }
}


bool borewell(struct stack *stack, int v)
{
   if (stack->location[v] < stack->size)
     return true;
   return false;
}

void printArr(int length[100][4], int n,int matrix[100][2])
{ int i;
    for (i = 0; i < n; ++i)
    {if(i!=length[i][1] && length[i][0]!=INT_MAX && length[i][3]==0)
        {printf("%d  %d  %d \n", i, length[i][2],length[i][1]);
        length[i][3]=2;}
    else if(length[i][0]!=INT_MAX && length[i][3]==0)
        {printf("%d %d  NIL\n",i, length[i][2]);
        length[i][3]=2;}}
}

int max(int length[100][4],int n)
{int i=0;
int maxi=0;
for(i=0;i<n;i++)
{
    if(length[i][0]!=INT_MAX && length[i][3]==0)
    {
        maxi=length[i][0];
    }
}
return maxi;
}

int dijkstra(struct Graph* graph, int src,int matrix[100][2],int length[100][4])
{
    int V = graph->V;
    int totalcost=0;
    struct stack* stack = createstack(V);
    int v;
    for (v = 0; v < V; ++v)
    {
        length[v][0] = INT_MAX;
        length[v][1] = src;
        length[v][2] = src;
        stack->arr[v] = newstackNode(v, length[v][0]);
        stack->location[v] = v;
    }



    stack->arr[src] = newstackNode(src, length[src][0]);
    stack->location[src]   = src;
    length[src][0] = matrix[src][0];
    decrement(stack, src, length[src][0]);

    stack->size = V;

    while (!isnull(stack))
    {
        struct stackNode* stackNode = extractMin(stack);
        int u = stackNode->v;
        struct neibhournode* water = graph->arr[u].head;
        while (water != NULL)
        {
            int v = water->dest;

            if (borewell(stack, v) && length[u][0] != INT_MAX && water->weight + length[u][0] < length[v][0] && (water->weight < matrix[v][0]) )
            {
                length[v][0] = length[u][0] + water->weight;
                length[v][1] = length[u][1];
                length[v][2] = u;
                decrement(stack, v, length[v][0]);
            }
	   else if (borewell(stack, v) && length[u][0] != INT_MAX &&  matrix[v][0] + length[u][0]< length[v][0] && water->weight > matrix[v][0])
            {
                length[v][0] = length[u][0] + matrix[v][0];
                length[v][1]=v;
                length[v][2] = u;
                decrement(stack, v, length[v][0]);

            }
            water = water->next;
        }
    }
    totalcost=max(length,V);

    printArr(length,V,matrix);
    return totalcost;
}
int least(int matrix[100][2],int n,int distmat[100][4])
{int i=0;
int index=INT_MAX;
int min=INT_MAX;
for(i=0;i<n;i++)
{
    if(distmat[i][3]!=2 && matrix[i][0]<min)
    {
        min=matrix[i][0];
        index=i;
    }
}
return index;
}
int dfs(int w)
{
    //b1[l1++]=w;
    int front[w],tot[w],an;
    check(w);
    if (front[w] == 0)
        return w;
    if (tot[w] < an)
        an = tot[w];
    return dfs(front[w]);
}
void fre1(char s[], int count[]) {
   int c = 0,i;
   for(i=0;i<100;i++)
	{
		count[i]=0;
	}
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
}

int additive(char s[100])
{
int i;
int countu=0;
for(i=0;i<strlen(s);i++)
{
countu+=s[i];

}
return countu;
}

int calc2(char s1[100],char s2[100])
{
	int sum1=additive(s1);
	int sum2=additive(s2);
	if(sum1-sum2>0)
		return (sum1-sum2);
	else
 		return (sum2-sum1);


}

int main()
{
    int V = 0,k;
    int count1[100],count2[100];

    char s[100][100];
    int i,n,j;
    int matrix[100][2],totalling;
    printf("enter the number of houses:\n");
    scanf("%d",&n);
	getchar();
    printf("please enter in lower case\n");
    for(i=0;i<n;i++)
	{
		printf("enter the %dth house:",i);

		gets(s[i]);
		V++;
	}
	int k11,q,a1[100],e=0,min=0,w[100];
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			q=0;
			for(k11=65;k<125;++k)
			{
				//q+=abs(a[i][k11]-a[j][k11]);
			}
			/*if((fr[i]-fr[j]==-1||fr[i]-fr[j]==1)&&q==1)
			{
				//adj[i][j]=abs(w[i]-w[j]);
				//adj[j][i]=abs(w[i]-w[j]);
				a1[e][0]=i+1;
				a1[e][1]=j+1;
				a1[e][2]=abs(w[i]-w[j]);
				e++;
				min+=abs(w[i]-w[j]);
			}*/
			/*else
			{
				adj[i][i]=w[i];
			}*/
		}
	}
    struct Graph* graph = createGraph(V);
    for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		fre1(s[i],count1);
		fre1(s[j],count2);
		totalling=0;
		for(k=0;k<26;k++)
			{
				if(count1[k]==count2[k] && count1!=0)
					totalling+=count1[k];

			}
		if((totalling==strlen(s[i])-1 && totalling==strlen(s[j])) || (totalling==strlen(s[j])-1) && totalling==strlen(s[i]))
		{
		ad_edge(graph,i,j,calc2(s[i],s[j]));
		}
		}
		matrix[i][0]=additive(s[i]);

	}
    int min_cost=0;
    int pac=0,pac2=0;
    int distmat[100][4];
    for(i=0;i<n;i++)
    {
        distmat[i][3]=0;
        distmat[i][0] = INT_MAX;
    }
    pac=least(matrix,n,distmat);
    k=0;
    while(pac!=INT_MAX)
        {
            pac2=dijkstra(graph,pac ,matrix,distmat);
            min_cost+=pac2;
            pac=least(matrix,n,distmat);
        }

        printf("the total cost is %d\n",min_cost);

    return 0;
}
