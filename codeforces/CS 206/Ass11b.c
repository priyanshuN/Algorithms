#include<stdio.h>
#define INF 9999
#define M 9999
int dist1[9999][9999];
int dist[9999][9999];
int path[9999][9999];
void capital (int V)
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
                    //path[i][j]=path[i][k];
                }

            }
        }
    }
    //printSolution(V);
}
int main()
{
    int n,m,i,j,x,y,z;
    printf("Enter the no of sites : ");
    scanf("%d",&n);
    printf("Enter the no roads : ");
    scanf("%d",&m);
    printf("Enter site 1 site 2 and cost respectively\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            dist1[i][j]=INF;
            if(i==j)
                dist1[i][j]=0;
            //path[i][j]=(i!=j)?j:-1;
        }
    }
    for(i=0;i<m;++i)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        dist1[x-1][y-1]=z;
        dist1[y-1][x-1]=z;
    }
    capital(n);
    int temp1=100000,ans=0;
    for(i=0;i<n;++i)
    {
        int temp=-99;
        for(j=0;j<n;++j)
        {
            if(i!=j)
            {
                if(temp<dist[i][j])
                {
                    temp=dist[i][j];
                }
            }
        }
        if(temp1>temp)
        {
            temp1=temp;
            ans=i;
        }
    }
    printf("Site to be selected as capital is numbered : %d\n",ans+1);
    return 0;
}
