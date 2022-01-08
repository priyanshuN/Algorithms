#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0]-n+1;
    return 0;
}
