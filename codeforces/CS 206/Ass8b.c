#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>
struct node
{
    long long int value;
    struct node *next;
};
void print2(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
        printf("%d",a[i]);
}
void add(struct node **head,long long int d)
{
    struct node *cur1=(struct node*)malloc(sizeof(struct node));
    cur1->next=NULL;
    cur1->value=d;
    struct node *cur=*head;
    if (cur==NULL)
    {
        *head=cur1;
        return;
    }
    while(cur->next!=NULL)
    cur=cur->next;
    cur->next=cur1;
    return;
}
void print (struct node *cur,int n)
{
    while(cur!=NULL)
    {
        printf("%d",cur->value);
        cur=cur->next;
    }
}
int main()
{
    long long int t,n,e;
    long long int gh,x,high,y,mflag,i,right,j,low,k,l,down,left,q,p,fronted;
    long long int front=0,rear=0,fr,re,w;
    printf("enter the no of vertices: ");
    scanf("%lld",&n );
    printf("\nenter the no of edges : ");
    scanf("%lld",&e);
    struct node *a[n+1];
    long long int visited[n+1],queued[n+1];
    for(i=0;i<=n;i++)
    {
        a[i]=NULL;
        visited[i]=0;
    }
    printf("enter vertex 1 and vertex 2 denoting edges upto %d times\n",e);
    while(e--)
    {
        scanf("%lld %lld",&x,&y);
        add(&a[x],y);
        add(&a[y],x);
    }
    printf("enter the no of queries : ");
    scanf("%lld",&q);

    while(q--)
    {
        printf("enter node and no of steps to be hoped respectively:\n");
        scanf("%lld %lld",&x,&y);
        queued[rear]=x;

        visited[x]=1;
        rear++;
        mflag=1;
        printf("total nodes hoped excluding current node is : ");
        while(front!=rear)
        {
            y--;
            j=0,w=0;
            int max;
            fr=front;
            int min;
            re=rear;
            for(i=fr;i<re;i++)
            {
                k=queued[front];
                front++;
                visited[k]=1;
                struct node *cur=a[k];
                while(cur!=NULL)
                {
                    if (visited[(cur->value)]==0)
                    {
                        visited[(cur->value)]=1;
                        queued[rear]=cur->value;
                        rear++;
                        j++;
                        w++;
                    }
                    cur=cur->next;
                }
            }
            if (y==0)
            {
                mflag=0;
                printf("%lld\n",rear-1);
                break;
            }
        }
        if (mflag==1)
        printf("%d\n",0);
        for(i=0;i<=n;i++)
            visited[i]=0;
        front=0;
        w=0;
        rear=0;
    }
    return 0;
}
