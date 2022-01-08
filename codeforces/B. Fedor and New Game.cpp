#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t=0;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<m+1;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;++i)
    {
        int z=a[m]^a[i];
        int x= __builtin_popcount (z);
        if(x<=k)
            t++;
    }
    cout<<t;
    return 0;
}
