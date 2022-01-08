#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k=0;
    cin>>n>>x;
    int a[n+2];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int m=n/2,s=0,e=n-1;
    for(int l=n;l>=1;l/=2)
    {
        if(x>a[m])
            m=s+l/2+1;

        else if(x<a[m])
            m=e-l/2-1;
        else if(x==a[m])
        {
            cout<<m+1;
            k=1;
            break;
        }
    }
   if(k==0)
    cout<<-1;
    return 0;
}
