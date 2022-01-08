#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,i,z=0;
    cin>>n>>k>>x;
    int a[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n-k;++i)
    {
        z+=a[i];
    }
    cout<<z+k*x;
    return 0;
}
