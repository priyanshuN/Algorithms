#include<stdio.h>
#include<stdlib.h>
/*int r( int A[ ] , int start , int end )
{
     int random = start + rand( )%(end-start +1 ) ;
      swap( A[random] , A[start]) ;
     return partition(A,start ,end) ;
}*/
void s(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y =t;
}
void p_t(int a[],int l,int h,int *i,int *j)
{
    if (h-l<=1)
    {
        if(a[h]<a[l])
            s(&a[h],&a[l]);
        *i=l;
        *j=h;
        return;
    }
    int m=l;
    int pt=a[h];
    while (m<=h)
    {
        if(a[m]<pt)
            s(&a[l++],&a[m++]);
        else if(a[m]==pt)
            m++;
        else if(a[m]>pt)
            s(&a[m],&a[h--]);
    }
    *i=l-1;
    *j=m;
}
void quick_sort(int a[],int l,int h)
{
    if(l>=h)
        return;
    int i,j;
    p_t(a,l,h,&i,&j);
    quick_sort(a,l,i);
    quick_sort(a,j,h);
}
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\nElements after sorting\n");
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
