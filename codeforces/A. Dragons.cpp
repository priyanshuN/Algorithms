#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,z,n,m,temp,h=0;
    cin>>n>>m;
    int a[m+1], b[m+1];
    for(i=0;i<m;++i)
    {
        cin>>a[i]>>b[i];
    }
    for(j=0;j<m;++j)
    {
        z=0;
        temp=-1;
        for(i=0;i<m;++i)
        {
            if(a[i]<n)
            {
                if(temp<b[i])
                {
                    temp=b[i];
                    k=i;
                    z=1;
                }
            }
        }
        if(z==1)
        {
            n+=b[k];
            h+=k+1;
            b[k]=-2;

        }
        else
            break;
    }
    if(h==m*(m+1)/2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
