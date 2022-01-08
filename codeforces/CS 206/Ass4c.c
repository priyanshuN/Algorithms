#include <stdio.h>
#include<stdlib.h>
int  _merge_sorting(int a[],int t[],int l,int r);
int merge(int a[],int t[],int l,int m,int r);
/*void merge_sort (int A[ ] , int start , int end )
{
    if( start < end )
    {
        int mid = (start + end ) / 2 ;
        merge_sort (A, start , mid ) ;
        merge_sort (A,mid+1 , end ) ;
        merge(A,start , mid , end );
    }
}*/
int count(int a[],int n)
{
    int *t=(int *)malloc(sizeof(int)*n);
    return _merge_sorting(a,t,0,n-1);
}
int _merge_sorting(int a[],int t[],int l,int r)
{
  int m,sum=0;
  if(r>l)
  {
    m=(r+l)/2;
    sum=_merge_sorting(a,t,l,m);
    sum+=_merge_sorting(a,t,m+1,r);
    sum+=merge(a,t,l,m+1,r);
  }
  return sum;
}
int merge(int a[],int t[],int l,int m,int r)
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
      sum=sum+(m - i);
    }
  }
  while (i<=m-1)
    t[k++]=a[i++];
  while (j <= r)
    t[k++]=a[j++];
  for (i=l;i<=r;i++)
    a[i]=t[i];
  return sum;
}
void print(int a[],int n)
{
    printf("The elements of array are:\n");
    int i;
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
}
int main(int argv, char** args)
{
  int n;
  printf("No of integers in array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the integer in array :\n");
  int i;
  for(i=0;i<n;++i)
  {
      scanf("%d",&a[i]);
  }
  printf("Number of such pairs are: %d \n",count(a,n));
  return 0;
}

