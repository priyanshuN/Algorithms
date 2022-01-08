#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node_info
{
    int no;
    int lv_time, st_time;
}q1 ;
q1 *q = NULL;
typedef struct node
{
    struct node_info *pt;
    struct node *next;
} t1;
t1 *top = NULL, *p = NULL, *np = NULL;
typedef struct node1
{
    struct node1 *link;
    struct  node_info *pt1;
} h1;
h1 *head = NULL, *m = NULL, *n = NULL, *np1 = NULL;
int c = 0;
void push(struct  node_info *ptr)
{
    //np = new node;
    struct node *np=(struct node*)malloc(sizeof(struct node));
    np->pt = ptr;
    np->next = NULL;
    if (top == NULL)
    {
        top = np;
    }
    else
    {
        np->next = top;
        top = np;
    }
}
struct node_info *pop()
{
    if (top == NULL)
    {
        //cout<<"underflow\n";
        printf("undrflow\n");
    }
    else
    {
        p = top;
        top = top->next;
        return(p->pt);
        p->next=NULL;
        free(p);
    }
}
void store( struct node_info *ptr1)
{
    //np1 = new node1;
    struct node1 *np1=(struct node1*)malloc(sizeof(struct node1));
    np1->pt1 = ptr1;
    np1->link = NULL;
    if (c == 0)
    {
        head = np1;
        m = head;
        m->link = NULL;
        c++;
    }
    else
    {
        m = head;
        np1->link = m;
        head = np1;
    }
}
void remove1(int x)
{
    m = head;
    if ((m->pt1)->no == x)
    {
        head = head->link;
        m->link=NULL;
        //(m->pt1)->link=NULL;
        free(m);
    }
    else
    {
        while ((m->pt1)->no != x && m->link != NULL)
        {
            n = m;
            m = m->link;
        }
        if ((m->pt1)->no == x)
        {
            n->link = m->link;
            m->link=NULL;
            //(m->pt1)->link=NULL;
            free(m);
        }
        else if (m->link == NULL)
        {
            //cout<<"error\n";
            printf("%error\n");
        }
    }
}
void topo(int *v, int am[][8], int i)
{
    //q = new node_info;
    struct node_info *q=(struct node_info*)malloc(sizeof(struct node_info));
    q->no = i;
    q->st_time = c;
     push(q);
    v[i] = 1;
    for (int j = 0; j < 8; j++)
    {
        if (am[i][j] == 0  || (am[i][j] == 1 && v[j] == 1))
            continue;
        else if (am[i][j] == 1 && v[j] == 0)
        {
            c++;
            topo(v,am,j);
        }
    }
    c++;
    q = pop();
    q->lv_time = c;
    store(q);
    return;
}
void topo1(int *v, int am[][8], int i)
{
    v[i] = 1;
    remove1(i);
    //cout<<i<<endl;
    printf("%d\n",i);
    for (int j = 0; j < 8; j++)
    {
        if (am[i][j] == 0  || (am[i][j] == 1 && v[j] == 1))
        {
            continue;
        }
        else if (am[i][j] == 1 && v[j] == 0)
        {
            topo1(v,am,j);
        }
    }
    return;
}
int main()
{
    int v[8], am[8][8], amt[8][8];
    for (int i = 0; i < 8; i++)
        v[i] = 0;
    for (int i = 0; i < 8; i++)
    {
        //cout<<"enter the values for adjacency matrix row:"<<i + 1<<endl;
        printf("enter the values for adjacency matrix row:%d\n",i+1);
        for (int j = 0; j < 8; j++)
        {
            //cin>>am[i][j];
            scanf("%d",&am[i][j]);
        }
    }
    topo(v, am, 0);
    for (int i = 0; i < 8; i++)
    {
        v[i] = 0;
        for (int j = 0; j < 8; j++)
            amt[j][i] = am[i][j];
    }
    int total=0;
    /*while(head!=NULL)
    {
        total++;
    */
    printf("Total no of strongly connected components : %d\n",total);
    while (head ->link!= NULL)
    {
        //cout<<"Strongly Connected Components:\n";
        printf("Strongly Connected Components:\n");
            topo1(v, amt, (head->pt1)->no);
    }
    getch();
    return 0;
}
