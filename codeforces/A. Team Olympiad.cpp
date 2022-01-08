#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m=0,k=0,z=0,temp;
    cin>>n;
    int a[n+1],b[n+1],c[n+1],d[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    j=0;
    for(i=0;i<n;++i)
    {
        if(a[i]==1)
        {
            b[j]=i+1;
            z+=1;
            j++;

        }
    }
    j=0;
    for(i=0;i<n;++i)
    {
        if(a[i]==2)
        {
            c[j]=i+1;
            k+=1;
            j++;

        }
    }
    j=0;
    for(i=0;i<n;++i)
    {
        if(a[i]==3)
        {
            d[j]=i+1;
            m+=1;
            j++;

        }
    }
    if(z<k)
    {
        temp=z;
        if(temp>m)
        temp=m;
    }
    else
    {
        temp=k;
        if(temp>m)
        temp=m;
    }
    if(temp==0)
        cout<<0;
    else
    {
        cout<<temp<<endl;
        for(i=0;i<temp;++i)
        {
            cout<<b[i]<<' '<<c[i]<<' '<<d[i]<<endl;
        }
    }
    return 0;
}
