#include<stdio.h>
#include<stdlib.h>
const int M=1000;
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void search(int a[],int n,int x)
{
    int i=0;
    for(i=0;i<n;++i)
    {
        if(a[i]==x)
        {
            printf("%d is present in the heap\n",x);
            break;
        }
    }
    if(i==n)
        printf("%d has NOT been found  in the heap\n",x);
}
void Down(int a[],int l,int index1,int k)
{
    int c[k+1];
    while (1)
    {
        int i;
        for (i=1;i<=k;i++)
            c[i]=((k*index1+i)<l)?(k*index1+i):-1;
        int max_c=-1,max_c_i;
        for(i=1;i<=k;i++)
        {
            if(c[i]!=-1&&a[c[i]]>max_c)
            {
                max_c_i=c[i];
                max_c=a[c[i]];
            }
        }
        if (max_c==-1)
            break;
        if (a[index1]<a[max_c_i])
            swap(&a[index1],&a[max_c_i]);
        index1=max_c_i;
    }
}
void Up(int a[],int i,int k)
{
    int parent=(i-1)/k;
    while (parent>=0)
    {
        if (a[i]>a[parent])
        {
            swap(&a[i],&a[parent]);
            i=parent;
            parent=(i-1)/k;
        }
        else
            break;
    }
}
void build_heap(int a[],int n,int k)
{
    int i=1;
    for (i=(n-1)/k;i>=0;i--)
        Down(a,n,i,k);
}
void insert(int a[],int* n,int k,int e)
{
    a[*n]=e;
    *n=*n+1;
    Up(a,*n-1,k);
}
void extractMax(int a[], int* n, int k)
{
    int max=a[0];
    a[0]=a[*n-1];
    *n=*n-1;
    Down(a,*n,0,k);
    return ;
}
int  delete1(int a[],int *n,int x,int k)
{
    int i,z=-1;
    for(i=0;i<*n;++i)
    {
        if(a[i]!=x&&i==(*n)-1)
        {
            //printf("Given element does not exit in the heap\n");
            return z;
        }
        else if(a[i]==x)
        {
            z=i;
            swap(&a[z],&a[0]);
            return z;
        }
    }
}
void option()
{
    printf("\nEnter 1 to insert new element\n");
    printf("Enter 2 search an element\n");
    printf("Enter 3 to delete and reaange\n");
    printf("Enter 4 to print heap\n");
    printf("Enter 5 to exit\n");
}
void print(int a[],int n)
{
    printf("Heap is as follows:\n");
    int i;
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[M],n=0;
    int k ;
    printf("Enter the no type-ary heap :");
    scanf("%d",&k);
    //build_heap(a, n, k);
    option();
    int m;
    scanf("%d",&m);
    while(m!=5)
    {
        switch(m)
        {
            case 1:
            {
                int x;
                printf("Enter new no : ");
                scanf("%d",&x);
                insert(a,&n,k,x);
                option();
                scanf("%d",&m);
                break;
            }
            case 2:
            {
                 int x;
                 printf("Enter the element to be searched : ");
                 scanf("%d",&x);
                 search(a,n,x);
                 option();
                 scanf("%d",&m);
                 break;
            }
            case 3:
            {
                int x;
                printf("Enter the element to be deleted : ");
                scanf("%d",&x);
                int h=delete1(a,&n,x,k);
                if(h==-1)
                    printf("Given element does not exit in the heap\n");
                else
                {
                    extractMax(a,&n,k);
                    printf("Element is successfully deleted\n");
                }
                option();
                scanf("%d",&m);
                break;
            }
            case 4:
            {
                print(a,n);
                option();
                scanf("%d",&m);
                break;
            }
        }
    }
    return 0;
}
