
#include<stdio.h>
#include<stdlib.h>
/*#include<bits/stdc++.h>
using namespace std;*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int a[],int n)
{
    for (int i=0;i<n;++i)
        printf("%d ", a[i]);
    printf("\n");
}
void partition(int a[],int low,int high,int &i,int &j)
{
    if (high-low<=1)
    {
        if (a[high] < a[low])
            swap(&a[high],&a[low]);
        i=low;
        j=high;
        return;
    }
    int mid=low;
    int pivot=a[high];
    while (mid<=high)
    {
        if (a[mid]<pivot)
            swap(&a[low++],&a[mid++]);
        else if (a[mid]==pivot)
            mid++;
        else if (a[mid]>pivot)
            swap(&a[mid],&a[high--]);
    }
    i = low-1;
    j = mid;
}
void quicksort(int a[],int low,int high)
{
    if (low>=high)
        return;
    int i, j;
    partition(a,low,high,i,j);
    quicksort(a,low,i);
    quicksort(a,j,high);
}
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    return 0;
}
