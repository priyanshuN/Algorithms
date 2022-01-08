#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        b[i]=1;
    }
    int z=0;
    for(int i=0;i<n;++i)
    {
        for(int j=i-1;j>=0;--j)
        {
            if(a[i]>a[j]&&b[i]<b[j]+1)
                b[i]=b[j]+1;;
        }
    }
    //cout<<z;
    for(int i=0;i<n;++i)
    {
        if(z<b[i])
            z=b[i];
    }
    cout<<z;
    return 0;
}
