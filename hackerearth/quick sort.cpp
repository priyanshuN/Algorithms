#include<bits/stdc++.h>
using namespace std;
int par(int a[],int start,int end)
{
        int j=start+1;
        for(int i=start+1;i<=end;++i)
        {
            if(a[i]<a[start])
            {
                swap(a[i],a[j]);
                j++;
            }
        }
        swap(a[j-1],a[start]);
        return(j-1);
}
void quick_sort(int a[],int start,int end)
    {
        if(start<end)
        {
            int piv=par(a,start,end);
            quick_sort (a,start,piv-1);
            quick_sort (a,piv +1,end);
        }
    }
int main()
{
    int i,x;
    cin>>x;
    int a[x+1];
    for(i=0;i<x;++i)
    {
        cin>>a[i];
    }
    quick_sort(a,0,x-1);
    for(i=0;i<x;++i)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}
