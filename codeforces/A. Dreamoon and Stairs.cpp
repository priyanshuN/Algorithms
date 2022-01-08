#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,k,i,a;
    cin>>n>>m;
    for(i=0;i<=int(n/2);++i)
    {
        z=(n-2*i)/2;
        k=z+n-z*2;
        if(k%m==0)
        {
            a=1;
           cout<<k;
           break;
        }
    }
    if(a!=1)
        cout<<-1;
    return 0;
}
