#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,z,k,x,y;
    cin>>n>>m;
    x=n%m;
    y=n/m;
    z=(n-m+1)*(n-m)/2;
    k=y*(y+1)*x/2 + y*(y-1)*(m-x)/2;
    cout<<k<<' '<<z;
    return 0;
}
