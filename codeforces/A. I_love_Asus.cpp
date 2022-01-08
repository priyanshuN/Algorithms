#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,z,k,m;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    m=0;
    for(j=1;j<n;++j)
    {
        k=0;z=0;
        for(i=0;i<j;++i)
        {
            if(a[j]<a[i])
            {
                z+=1;
            }
            if(a[j]>a[i])
                k+=1;
        }
        if(z==j||k==j)
            m+=1;
    }
    cout<<m;
    return 0;
}

