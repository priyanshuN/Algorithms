#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,h=0;
    cin>>n>>m;
    int a[m+1], b[m+1];
    for(i=0;i<m;++i)
    {
        cin>>a[i]>>b[i];
    }
    for(j=0;j<m;++j)
    {
        for(i=0;i<m;++i)
        {
            if(a[i]<n)
            {
                n+=b[i];
                h+=i+1;
                b[i]=-2;

            }
        }
    }
    if(h==m*(m+1)/2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

