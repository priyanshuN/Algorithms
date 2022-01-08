#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,m,n,a,b,i,x=0,z=0;
    cin>>s>>t>>a>>b>>m>>n;
    int ap[m+1],o[n+1];
    for(i=0;i<m;++i)
    {
        cin>>ap[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>o[i];
    }
    for(i=0;i<m;++i)
    {
        if(s<=ap[i]+a&&ap[i]+a<=t)
            z+=1;
    }
    for(i=0;i<n;++i)
    {
        if(o[i]+b>=s&&o[i]+b<=t)
            x+=1;
    }
    cout<<z<<endl<<x;
    return 0;
}
