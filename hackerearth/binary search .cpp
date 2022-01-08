#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,k,z,m;
    cin>>n>>x;
    int a[n+2];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    z=0;
    k=n-1;
    while(z<=k)
    {
        m=(z+k)/2;
        if(a[m]<x)
        {
            z=m+1;
        }
        else if(a[m]>x)
        {
            k=m-1;
        }
        else
        {
            cout<<m+1;
            i=-1;
            break;
        }
    }
    if(i!=-1)
        cout<<-1;
    return 0;
}
