#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,z=0,k;
    cin>>n>>d;
    int a[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        z+=a[i];
    }
    k=d-(n-1)*10-z;
    if(k>=0)
    {
        cout<<k/5+(n-1)*2;
    }
    else
        cout<<-1;
    return 0;
}
