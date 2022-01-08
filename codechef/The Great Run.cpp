#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;++i)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int j=0;j<n;++j)
    {
        cin>>a[j];
    }
    int temp=a[0],z;
    for(int j=0;j<=n-k;++j)
    {
        z=0;
        for(int h=j;h<j+k;++h)
        {
            z+=a[h];
        }
        if(temp<z)
            temp=z;
    }
    cout<<temp<<endl;
}
return 0;
}
