#include<stdio.h>
#include<stdlib.h>
const int INT_MAX=999999;
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int part_pivot(int a[],int s,int e,int k);
int choice(int a[],int s,int e,int k);
/*void sort(int a[],int n)
{
    int i,j;
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}*/
void st(int a[],int t[],int l,int r)
{
  int m,sum=0;
  if(r>l)
  {
    m=(r+l)/2;
    st(a,t,l,m);
    st(a,t,m+1,r);
    merge(a,t,l,m+1,r);
  }
}
void merge(int a[],int t[],int l,int m,int r)
{
  int i,j,k;
  int sum=0;
  i=l;
  j=m;
  k=l;
  while((i<=m-1)&&(j<=r))
  {
    if(a[i]<=a[j])
    {
      t[k++]=a[i++];
    }
    else
    {
      t[k++]=a[j++];
    }
  }
  while (i<=m-1)
    t[k++]=a[i++];
  while (j <= r)
    t[k++]=a[j++];
  for (i=l;i<=r;i++)
    a[i]=t[i];
}
void quick_sort(int a[],int s,int h)
{
    if(s<h)
    {
        int n=h-s+1;
        int med=choice(a,s,h,n/2);
        int p=part_pivot(a,s,h,med);
        quick_sort(a,s,p-1);
        quick_sort(a,p+1,h);
    }
}
int med(int a[],int n)
{
    int t[n];
    st(a,t,0,n-1);
    return a[n/2];
}
int choice(int a[],int s,int e,int k)
{
    if (k>0&&k<=e-s+1)
    {
        int n=e-s+1;
        int i,median[(n+4)/5];
        for (i=0;i<n/5;i++)
            median[i]=med(a+s+i*5,5);
        if (i*5<n)
        {
            median[i]=med(a+s+i*5,n%5);
            i++;
        }
        int med_Med=(i==1)?median[i-1]:choice(median,0,i-1,i/2);
        int position=part_pivot(a,s,e,med_Med);
        if(position-s==k-1)
            return a[position];
        if(position-s>k-1)
            return choice(a,s,position-1,k);
        return choice(a,position+1,e,k-position+s-1);
    }
    //return INT_MAX;
}
int part_pivot(int a[],int s,int e,int x)
{
    int i,j;
    for (i=s;i<e;i++)
        if (a[i]==x)
           break;
    swap(&a[i],&a[e]);
    i=s;
    for (j=s;j<=e-1;j++)
    {
        if(a[j]<=x)
        {
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[e]);
    return i;
}
void print(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the no of integers to be sorted : ");
    scanf("%d",&n);
    printf("Enter the integers of array\n");
    int i,a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    printf("Array after sorting\n");
    print(a,n);
    return 0;
}
