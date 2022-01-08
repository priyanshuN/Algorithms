#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z;
    cin>>n;
    int b[n+1],a[n];
    for(int j=0;j<=n;++j)
    {
        b[j]=0;
    }
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
        //if(a[i]!=i+1)
            b[i+1]=1;
            z=a[i];
        while(1)
        {
            //z=a[i];
            b[z]++;
            if(b[z]==2)
            {
                cout<<z<<' ';
                break;
            }
            z=a[z-1];
            //b[z]++;
        }
        for(int j=0;j<=n;++j)
        {
            b[j]=0;
        }
    }
    return 0;
}
