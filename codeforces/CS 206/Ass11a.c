#include<stdio.h>
#define INF 9999
#define M 9999
int dist1[9999][9999];
int dist[9999][9999];
int path[9999][9999];
int c1[7];
int a[5];
int temp=999999,y=0;
int d[7];
void printSolution(int V);
void minimumcost (int V)
{
    int  i, j, k;
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = dist1[i][j];
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j]=path[i][k];
                }

            }
        }
    }
    printSolution(V);
}
void printSolution(int V)
{
    printf ("The following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}
void swap(int *x1,int *y1)
{
    int temp1;
    temp1=*x1;
    *x1=*y1;
    *y1=temp1;
}
void permutation(int l,int r)
{
    int i;
    if(l==r)
    {
        int j,z=0;
        for(j=0;j<r+1;++j)
        {
            z+=dist[c1[j]][c1[j+1]];
            //printf("%d ",c1[j]);
        }
        //printf("%d %d %d",c1[j-1],c1[j],dist[c1[j-1]][c1[j]]);
        //printf("\n");
        if(temp>z)
        {
            temp=z;
            for(j=0;j<r+2;++j)
            {
                d[j]=c1[j];
            }
        }
    }
    else
    {
        for (i = l; i <= r; i++)
        {
          //swap((c1+l), (c1+i));
          swap(&c1[l],&c1[i]);
          permutation(l+1, r);
          //swap((c1+l), (c1+i));
          swap(&c1[l],&c1[i]);
        }
    }
}
int main()
{
    int n,m,x,k,a,b,c;
    printf("Numbering of  cities will start from 1\n");
    printf("Enter the no of cities : ");
    scanf("%d",&n);
    //V=n;
    //int dist1[n][n];
    printf("Enter the source city : ");
    scanf("%d",&x);
    x=x-1;
    printf("enter the no of cities where letters are to be delivered : ");
    scanf("%d",&k);
    int a1[k];
    int i,j;
    printf("Enter the cities where letters are to be delivered\n");
    for(i=0;i<k;++i)
    {
        int z2;
        scanf("%d",&z2);
        a1[i]=z2-1;
    }
    /*for(i=0;i<k;++i)
    {
        printf("%d",a1[i]);
    }*/
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            dist1[i][j]=INF;
            if(i==j)
                dist1[i][j]=0;
            path[i][j]=(i!=j)?j:-1;
        }
    }
    printf("Enter the no of roads : ");
    scanf("%d",&m);
    for(i=0;i<m;++i)
    {
        printf("Enter for %d road\n",i+1);
        printf("Enter the source city : ");
        scanf("%d",&a);
        printf("Enter the destination city : ");
        scanf("%d",&b);
        printf("Enter the length of the road : ");
        scanf("%d",&c);
        dist1[a-1][b-1]=c;
        printf("\n");
    }
    minimumcost(n);

    c1[0]=x;
    for(i=0;i<k;++i)
    {
        c1[i+1]=a1[i];
        //printf("%d ",c1[i]);
    }
    c1[k+1]=x;
    //printf("%d",c1[k+1]);
    //printf("\n");


    permutation(1,k);
    printf("Minimum length to be travelled is : %d\n",temp);
    printf("\nPath travelled through cities(letter delivery cities) is \n");
    for(i=0;i<k+1;++i)
    {
        printf("%d -> ",d[i]+1);
    }
    printf("%d\n",d[k+1]+1);
    printf("\nActual path travelled across cities");
    for(i=0;i<k+1;++i)
    {
        printf("\n%d ",d[i]+1);
        int k1=d[i];
        do{
            k1=path[k1][d[i+1]];
            printf("-> %d",k1+1);
        }while(k1!=d[i+1]);
    }
    printf("\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d ",path[i][j]);
        }
        printf("\n");
    }
    return 0;
}
