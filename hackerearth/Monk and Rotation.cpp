#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n,k,z;
    int a[10000],b[10000];
    cin>>x;
    for(i=0;i<x;++i)
    {
        cin>>n>>k;
        for(j=0;j<n;++j)
        {
            cin>>a[j];
        }
        z=k%n;
        for(j=0;j<n;++j)
        {
            b[(j+z)%n]=a[j];
        }
        for(j=0;j<n;++j)
        {
            cout<<b[j]<<" ";
        }
    }
    return 0;
}
