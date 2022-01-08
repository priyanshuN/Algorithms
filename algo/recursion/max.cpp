#include<bits/stdc++.h>
using namespace std;
int max1(int a[],int n,int l,int i)
{
    if(l<a[i])
        l=a[i];
    if(n==1)
        return l;
    max1(a,n-1,l,i+1);
}
int min1(int a[],int n,int l,int i)
{
    if(l>a[i])
        l=a[i];
    if(n==1)
        return l;
    min1(a,n-1,l,i+1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int z=max1(a,n,a[0],0);
    int k=min1(a,n,a[0],0);
    cout<<z<<' '<<k;
    return 0;
}
