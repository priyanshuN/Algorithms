#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <stdio.h>
int z=0;
int pipes[9999][9999];
    int queue[9999];
    int traversed[9999];
    int front = -1;
    int rear = -1;
void display(int temp1,int root[],int temp2[], int j,int sifnal[])
{
    if (root[j]==-1)
        return;
    display(temp1,root, temp2,root[j],sifnal);
	sifnal[z++]=j;
}
void enque(int value)
    {
    	if (rear == -1) {
    		front = rear = 0;
    		queue[rear] = value;
    		return;
    	}
    	rear++;
    	queue[rear] = value;
    }
    int deque()
    {
    	int maximum_flow1 = queue[front];
    	front++;
    	return maximum_flow1;
    }
    int check_full()
    {
        int n;
    	if (rear >= n)
    		return 1;
    	else
    		return 0;
    }
    int check_empty()
    {
    	if (rear == -1 || front > rear)
    		return 1;
    	return 0;
    }
int main()
{
    int n,i,j,k,m,y,b;
    printf("Enter value of n(no of access points) \n");
    scanf("%d",&n);
    printf("Enter value of k (maximum no of accessible mobiles at a time)\n");
    scanf("%d",&k);
    printf("Enter no. of mobile devices \n");
    scanf("%d",&m);
    int temp=n+m+2;
    int arr[temp][temp];
    for (i = 0; i < temp; i++)
    {
        for (j = 0; j < temp; j++)
            arr[i][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        printf("Please enter Number of Access Points device no.  %d can connect  \n",i);
        scanf("%d",&y);
        printf("Enter list of access points  \n");
        for(j=1;j<=y;j++)
        {
            scanf("%d",&b);
            arr[i][m+b]=1;
        }
    }
    int kl,bi=0;
    for(kl=0;kl<1;++kl)
      bi++;
    for(i=1;i<=m;i++)
        arr[0][i]=1;
    for(j=1;j<=n;j++)
        arr[m+j][temp-1]=k;
    int dist[temp];
    int root[temp];
    int sifnal[200000];
    int access=0;
    int link=0;
    while(1)
    {
        for(i=0;i<=20000;i++)
            sifnal[i]=0;
        for(i=0;i<temp;i++)
        {
            dist[i]=999999;
            root[i]=-1;
        }
    dist[0]=0;
    for (i = 0; i < temp ; i++)
    {
        for (j = 0; j < temp; j++)
        {
            if(arr[i][j]!=0&&dist[j]>dist[i]+arr[i][j])
            {
                dist[j]=dist[i]+arr[i][j];
                root[j]=i;
            }
        }
    }
    sifnal[z++]=0;
    int temp1,temp2[200];
    display(temp1,root,temp2,temp-1,sifnal);
    int least=arr[sifnal[0]][sifnal[1]];
    for(i=0;i<z-1;i++)
    {
        if(least>arr[sifnal[i]][sifnal[i+1]])
        least=arr[sifnal[i]][sifnal[i+1]];
    }
    if(root[temp-1]==-1||link==5)
        break;
    link++;
    access=access+least;
    for(i=0;i<z-1;i++)
    {
        arr[sifnal[i]][sifnal[i+1]]=arr[sifnal[i]][sifnal[i+1]]-least;
        arr[sifnal[i+1]][sifnal[i]]=least;
    if(i)
    {
        if(sifnal[i]<=m)
            printf("%d ",sifnal[i]);
        else
            printf("%d ",sifnal[i]-m);
    }
    }z=0;
    printf("\n");
    }
    printf("Maximum Devices that can be associated %d \n",access);
return 0;
}
