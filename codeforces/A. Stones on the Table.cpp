#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,z=0;
    cin>>n;
    char a[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;++i)
    {
        if(a[i]==a[i+1])
        {
            z+=1;
        }
    }
    cout<<z;
    return 0;
}
