#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,z=0,k=0;
    cin>>n;
    long long int a[n+1],b[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;++i)
    {
        if(a[i]>0&&b[i]>=0)
        {
            z+=1;
        }
        if(a[i]>0&&b[i]<0)
        {
            z+=1;
        }
        if(a[i]<0&&b[i]<=0)
        {
            k+=1;
        }
        if(a[i]<0&&b[i]>0)
        {
            k+=1;
        }

    }
    if(k<=1||z<=1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
