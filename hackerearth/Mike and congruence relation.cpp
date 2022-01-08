#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    long int m;
    cin>>n>>k;
    m=(n*n+n+k*(k+1)*(2*k+1)/6-(2*n+1)*k*(k+1)/2)/k;
    cout<<m/2;
    return 0;
}
