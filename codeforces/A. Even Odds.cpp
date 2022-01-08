#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,z,k;
    cin>>n>>m;
    z=m-(n+1)/2;
    k=2*m-1;
    if(m<=(n+1)/2)
        cout<<k;
    else
        cout<<2*z;
    return 0;
}
