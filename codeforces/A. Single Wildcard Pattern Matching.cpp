#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=-1;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int z=0,z1=0;
    if(n-m<=1)
    {
    for(int i=0;i<n;++i)
    {
        if(a[i]=='*')
        {
            k=i;
            break;
        }
        if(a[i]!=b[i])
        {
            z=1;
            break;
        }
    }
    int h=m;
    if(k!=-1)
    {
    for(int i=n-1;i>=k+1;--i)
    {
        /*if(a[i]=='*')
        {
            int k=i;
            break;
        }*/
        if(a[i]!=b[--m])
        {
            z1=1;
            break;
        }
    }
    }
    if(z==0&&z1==0)
        cout<<"YES";
    else
        cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
