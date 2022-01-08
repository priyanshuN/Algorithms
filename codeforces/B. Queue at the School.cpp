#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    char a[n+1];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(j=0;j<t;++j)
    {
        for(i=0;i<n-1;++i)
        {
            if(a[i]=='B'&&a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i++;
            }
        }
    }
    for(i=0;i<n;++i)
    {
        cout<<a[i];
    }
    return 0;
}
