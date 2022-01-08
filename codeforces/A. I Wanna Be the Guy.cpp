#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,n,m,z,k,q,s;
    int a[101],b[101];
    cin>>x;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;++i)
    {
        cin>>b[i];
    }
    for(j=1;j<=x;j++)
    {
        i=0;
        k=0;
        while(i<n||k<m)
        {
            if(j==a[i]||j==b[k])
            {
                z=j;
                break;
            }
            i++;
            k++;
        }
        if(z!=j)
            break;
    }
    if(z==x)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}
