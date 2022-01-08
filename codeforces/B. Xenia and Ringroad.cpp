#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    long long int z;
    cin>>n>>m;
    int a[m+1];
    for(i=0;i<m;++i)
    {
        cin>>a[i];
    }
    z=a[0]-1;
    for(i=0;i<m-1;++i)
    {
        if(a[i]>a[i+1])
        {
            z+=n-a[i]+a[i+1];
        }
        else
        {
            z+=a[i+1]-a[i];
        }
    }
    cout<<z;
    return 0;
}
