#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if(k>(2*n-1))
        cout<<0;
    else if(k==1||k==2)
        cout<<0;
    else if(k<=n+1)
        cout<<(k-1)/2;
    else
    {
        long long int z=k-n;
        cout<<(n-z+1)/2;
    }
    return 0;
}
