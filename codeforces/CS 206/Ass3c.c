#include<stdio.h>
#include<stdlib.h>
const int MAX=1000;
int min1(int a[][MAX],int n,int l,int i,int mid)
{
    if(l>a[i][mid])
        l=a[i][mid];
    if(n==1)
        return l;
    min1(a,n-1,l,i+1,mid);
}
int minimum(int a[][MAX],int n,int mid,int *min)
{
    int min_i=0,i;
    for(i=0;i<n;i++)
    {
        if (*min>a[i][mid])
        {
            *min=a[i][mid];
            min_i= i;
        }
    }
    return min_i;
}
int local(int a[][MAX],int n,int mid)
{
    int min=9999999;
    int min_i=minimum(a,n,mid,&min);
    if(mid==0||mid==n-1)
        return min;
    else if(min<=a[min_i][mid-1] && min<=a[min_i][mid+1])
        return min;
    else if(min>a[min_i][mid-1])
        return local(a,n,mid - mid/2);
    return local(a,n,mid+mid/2);
}
int localmin(int a[][MAX],int n)
{
    return local(a,n,n/2);
}
void print(int a[][MAX],int n)
{
    int i,j;
   for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the order of matrix : ");
    scanf("%d",&n);
    int i,j,a[n][MAX];
    printf("Enter the elements of matrix\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int h=localmin(a,n);
    printf("Local minimum with efficient algorithm is:\n");
    printf("%d\n",h);
    return 0;
}
