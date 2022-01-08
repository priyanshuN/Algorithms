#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z,k;
    cin>>n;
    z=int(n/100)*10+(n%10);
    k=n/10;
    if(n>=0)
        cout<<n;
    else
    {
        if(z>k)
            cout<<z;
        else
            cout<<k;
    }
    return 0;
}
